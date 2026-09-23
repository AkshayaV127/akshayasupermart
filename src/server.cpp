#include <winsock2.h>
#include <iostream>
#include <string>
#include <sqlite3.h>

#pragma comment(lib, "ws2_32.lib")

using namespace std;

string getProducts(sqlite3 *db)
{
    string json = "[";

    const char *sql =
        "SELECT id, name, category, price, quantity FROM products";

    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK)
        return "[]";

    bool first = true;

    while (sqlite3_step(stmt) == SQLITE_ROW)
    {
        if (!first)
            json += ",";

        first = false;

        int id = sqlite3_column_int(stmt, 0);
        const unsigned char *name = sqlite3_column_text(stmt, 1);
        const unsigned char *category = sqlite3_column_text(stmt, 2);
        double price = sqlite3_column_double(stmt, 3);
        int quantity = sqlite3_column_int(stmt, 4);

        json += "{";
        json += "\"id\":" + to_string(id) + ",";
        json += "\"name\":\"" + string((const char *)name) + "\",";
        json += "\"category\":\"" + string((const char *)category) + "\",";
        json += "\"price\":" + to_string(price) + ",";
        json += "\"quantity\":" + to_string(quantity);
        json += "}";
    }

    sqlite3_finalize(stmt);

    json += "]";

    return json;
}

string loginUser(sqlite3 *db, string email, string password)
{
    string result =
        "{\"status\":\"failed\",\"message\":\"Invalid email or password\"}";

    const char *sql =
        "SELECT id, name, role FROM users WHERE email=? AND password=?";

    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK)
        return result;

    sqlite3_bind_text(stmt, 1, email.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, password.c_str(), -1, SQLITE_TRANSIENT);

    if (sqlite3_step(stmt) == SQLITE_ROW)
    {
        int id = sqlite3_column_int(stmt, 0);

        const unsigned char *nameText =
            sqlite3_column_text(stmt, 1);

        const unsigned char *roleText =
            sqlite3_column_text(stmt, 2);

        string name =
            nameText ? (const char *)nameText : "";

        string role =
            roleText ? (const char *)roleText : "";

        result =
            "{\"status\":\"success\","
            "\"id\":" + to_string(id) +
            ",\"name\":\"" + name +
            "\",\"role\":\"" + role + "\"}";
    }

    sqlite3_finalize(stmt);

    return result;
}

int main()
{
    sqlite3 *db;

    if (sqlite3_open("akshayamart.db", &db) != SQLITE_OK)
    {
        cout << "Database connection failed!" << endl;
        return 1;
    }

    cout << "Database connected successfully!" << endl;

    WSADATA wsa;

    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
    {
        cout << "Winsock startup failed!" << endl;
        sqlite3_close(db);
        return 1;
    }

    cout << "Winsock started successfully!" << endl;

    SOCKET serverSocket =
        socket(AF_INET, SOCK_STREAM, 0);

    if (serverSocket == INVALID_SOCKET)
    {
        cout << "Socket creation failed!" << endl;
        WSACleanup();
        sqlite3_close(db);
        return 1;
    }

    cout << "Socket created successfully!" << endl;

    BOOL option = TRUE;

    setsockopt(
        serverSocket,
        SOL_SOCKET,
        SO_REUSEADDR,
        (char *)&option,
        sizeof(option)
    );

    sockaddr_in serverAddress{};

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(8080);

    cout << "Trying to bind port 8080..." << endl;

    if (bind(
            serverSocket,
            (sockaddr *)&serverAddress,
            sizeof(serverAddress)) == SOCKET_ERROR)
    {
        cout << "Bind failed!" << endl;
        cout << "Error code: " << WSAGetLastError() << endl;

        closesocket(serverSocket);
        WSACleanup();
        sqlite3_close(db);

        return 1;
    }

    cout << "Bind successful!" << endl;

    cout << "Trying to listen on port 8080..." << endl;

    if (listen(serverSocket, 5) == SOCKET_ERROR)
    {
        cout << "Listen failed!" << endl;
        cout << "Error code: " << WSAGetLastError() << endl;

        closesocket(serverSocket);
        WSACleanup();
        sqlite3_close(db);

        return 1;
    }

    cout << "Listen successful!" << endl;

    cout << "AkshayaMart backend server started!" << endl;
    cout << "Products API: http://localhost:8080/api/products" << endl;
    cout << "Login API: http://localhost:8080/api/login" << endl;

    while (true)
    {
        SOCKET clientSocket =
            accept(serverSocket, nullptr, nullptr);

        if (clientSocket == INVALID_SOCKET)
        {
            cout << "Accept failed!" << endl;
            continue;
        }

        char buffer[4096] = {0};

        int received =
            recv(clientSocket, buffer, sizeof(buffer) - 1, 0);

        if (received <= 0)
        {
            closesocket(clientSocket);
            continue;
        }

        string request(buffer);

        string response;

        if (request.find("GET /api/products") != string::npos)
        {
            string products = getProducts(db);

            response =
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: application/json\r\n"
                "Access-Control-Allow-Origin: *\r\n"
                "Connection: close\r\n"
                "\r\n" +
                products;
        }
        else if (request.find("POST /api/login") != string::npos)
        {
            size_t bodyPosition =
                request.find("\r\n\r\n");

            string body;

            if (bodyPosition != string::npos)
                body = request.substr(bodyPosition + 4);

            string email = "";
            string password = "";

            size_t emailPosition =
                body.find("email=");

            size_t passwordPosition =
                body.find("password=");

            if (emailPosition != string::npos)
            {
                size_t end =
                    body.find("&", emailPosition);

                if (end == string::npos)
                    end = body.length();

                email =
                    body.substr(
                        emailPosition + 6,
                        end - (emailPosition + 6)
                    );
            }

            if (passwordPosition != string::npos)
            {
                password =
                    body.substr(passwordPosition + 9);
            }

            string result =
                loginUser(db, email, password);

            response =
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: application/json\r\n"
                "Access-Control-Allow-Origin: *\r\n"
                "Connection: close\r\n"
                "\r\n" +
                result;
        }
        else
        {
            response =
                "HTTP/1.1 404 Not Found\r\n"
                "Content-Type: text/html\r\n"
                "Connection: close\r\n"
                "\r\n"
                "<html>"
                "<body>"
                "<h1>404 Not Found</h1>"
                "</body>"
                "</html>";
        }

        send(
            clientSocket,
            response.c_str(),
            (int)response.length(),
            0
        );

        closesocket(clientSocket);
    }

    closesocket(serverSocket);
    WSACleanup();
    sqlite3_close(db);

    return 0;
}