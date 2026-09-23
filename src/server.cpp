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

        const unsigned char *name =
            sqlite3_column_text(stmt, 1);

        const unsigned char *category =
            sqlite3_column_text(stmt, 2);

        double price =
            sqlite3_column_double(stmt, 3);

        int quantity =
            sqlite3_column_int(stmt, 4);

        json += "{";
        json += "\"id\":" + to_string(id) + ",";
        json += "\"name\":\"" +
                string((const char *)name) + "\",";
        json += "\"category\":\"" +
                string((const char *)category) + "\",";
        json += "\"price\":" +
                to_string(price) + ",";
        json += "\"quantity\":" +
                to_string(quantity);
        json += "}";
    }

    sqlite3_finalize(stmt);

    json += "]";

    return json;
}

string loginUser(
    sqlite3 *db,
    string email,
    string password)
{
    string result =
        "{\"status\":\"failed\",\"message\":\"Invalid email or password\"}";

    const char *sql =
        "SELECT id, name, role FROM users WHERE email=? AND password=?";

    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(
            db,
            sql,
            -1,
            &stmt,
            nullptr) != SQLITE_OK)
        return result;

    sqlite3_bind_text(
        stmt,
        1,
        email.c_str(),
        -1,
        SQLITE_TRANSIENT);

    sqlite3_bind_text(
        stmt,
        2,
        password.c_str(),
        -1,
        SQLITE_TRANSIENT);

    if (sqlite3_step(stmt) == SQLITE_ROW)
    {
        int id =
            sqlite3_column_int(stmt, 0);

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

string registerUser(
    sqlite3 *db,
    string name,
    string email,
    string password,
    string role)
{
    const char *sql =
        "INSERT INTO users (name, email, password, role) VALUES (?, ?, ?, ?)";

    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(
            db,
            sql,
            -1,
            &stmt,
            nullptr) != SQLITE_OK)
    {
        return "{\"status\":\"failed\",\"message\":\"Database error\"}";
    }

    sqlite3_bind_text(
        stmt,
        1,
        name.c_str(),
        -1,
        SQLITE_TRANSIENT);

    sqlite3_bind_text(
        stmt,
        2,
        email.c_str(),
        -1,
        SQLITE_TRANSIENT);

    sqlite3_bind_text(
        stmt,
        3,
        password.c_str(),
        -1,
        SQLITE_TRANSIENT);

    sqlite3_bind_text(
        stmt,
        4,
        role.c_str(),
        -1,
        SQLITE_TRANSIENT);

    if (sqlite3_step(stmt) != SQLITE_DONE)
    {
        sqlite3_finalize(stmt);

        return "{\"status\":\"failed\",\"message\":\"Email already exists\"}";
    }

    sqlite3_finalize(stmt);

    return "{\"status\":\"success\",\"message\":\"Registration successful\"}";
}

string addProduct(
    sqlite3 *db,
    string name,
    string category,
    string price,
    string quantity,
    string sellerId)
{
    const char *sql =
        "INSERT INTO products "
        "(name, category, price, quantity, seller_id) "
        "VALUES (?, ?, ?, ?, ?)";

    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(
            db,
            sql,
            -1,
            &stmt,
            nullptr) != SQLITE_OK)
    {
        return "{\"status\":\"failed\",\"message\":\"Database error\"}";
    }

    sqlite3_bind_text(
        stmt,
        1,
        name.c_str(),
        -1,
        SQLITE_TRANSIENT);

    sqlite3_bind_text(
        stmt,
        2,
        category.c_str(),
        -1,
        SQLITE_TRANSIENT);

    sqlite3_bind_double(
        stmt,
        3,
        stod(price));

    sqlite3_bind_int(
        stmt,
        4,
        stoi(quantity));

    sqlite3_bind_int(
        stmt,
        5,
        stoi(sellerId));

    if (sqlite3_step(stmt) != SQLITE_DONE)
    {
        sqlite3_finalize(stmt);

        return "{\"status\":\"failed\",\"message\":\"Product could not be added\"}";
    }

    sqlite3_finalize(stmt);

    return "{\"status\":\"success\",\"message\":\"Product added successfully\"}";
}

string updateProduct(
    sqlite3 *db,
    string id,
    string name,
    string category,
    string price,
    string quantity)
{
    const char *sql =
        "UPDATE products "
        "SET name=?, category=?, price=?, quantity=? "
        "WHERE id=?";

    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(
            db,
            sql,
            -1,
            &stmt,
            nullptr) != SQLITE_OK)
    {
        return "{\"status\":\"failed\",\"message\":\"Database error\"}";
    }

    sqlite3_bind_text(
        stmt,
        1,
        name.c_str(),
        -1,
        SQLITE_TRANSIENT);

    sqlite3_bind_text(
        stmt,
        2,
        category.c_str(),
        -1,
        SQLITE_TRANSIENT);

    sqlite3_bind_double(
        stmt,
        3,
        stod(price));

    sqlite3_bind_int(
        stmt,
        4,
        stoi(quantity));

    sqlite3_bind_int(
        stmt,
        5,
        stoi(id));

    if (sqlite3_step(stmt) != SQLITE_DONE)
    {
        sqlite3_finalize(stmt);

        return "{\"status\":\"failed\",\"message\":\"Product could not be updated\"}";
    }

    sqlite3_finalize(stmt);

    return "{\"status\":\"success\",\"message\":\"Product updated successfully\"}";
}

string deleteProduct(
    sqlite3 *db,
    string id)
{
    const char *sql =
        "DELETE FROM products WHERE id=?";

    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(
            db,
            sql,
            -1,
            &stmt,
            nullptr) != SQLITE_OK)
    {
        return "{\"status\":\"failed\",\"message\":\"Database error\"}";
    }

    sqlite3_bind_int(
        stmt,
        1,
        stoi(id));

    if (sqlite3_step(stmt) != SQLITE_DONE)
    {
        sqlite3_finalize(stmt);

        return "{\"status\":\"failed\",\"message\":\"Product could not be deleted\"}";
    }

    sqlite3_finalize(stmt);

    return "{\"status\":\"success\",\"message\":\"Product deleted successfully\"}";
}

string getFormValue(
    string body,
    string key)
{
    string searchKey =
        key + "=";

    size_t position =
        body.find(searchKey);

    if (position == string::npos)
        return "";

    size_t start =
        position + searchKey.length();

    size_t end =
        body.find("&", start);

    if (end == string::npos)
        end = body.length();

    return body.substr(
        start,
        end - start);
}

int main()
{
    sqlite3 *db;

    if (sqlite3_open(
            "akshayamart.db",
            &db) != SQLITE_OK)
    {
        cout << "Database connection failed!" << endl;
        return 1;
    }

    cout << "Database connected successfully!" << endl;

    WSADATA wsa;

    if (WSAStartup(
            MAKEWORD(2, 2),
            &wsa) != 0)
    {
        cout << "Winsock startup failed!" << endl;

        sqlite3_close(db);

        return 1;
    }

    cout << "Winsock started successfully!" << endl;

    SOCKET serverSocket =
        socket(
            AF_INET,
            SOCK_STREAM,
            0);

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
        sizeof(option));

    sockaddr_in serverAddress{};

    serverAddress.sin_family =
        AF_INET;

    serverAddress.sin_addr.s_addr =
        INADDR_ANY;

    serverAddress.sin_port =
        htons(8080);

    cout << "Trying to bind port 8080..." << endl;

    if (bind(
            serverSocket,
            (sockaddr *)&serverAddress,
            sizeof(serverAddress)) == SOCKET_ERROR)
    {
        cout << "Bind failed!" << endl;

        cout << "Error code: "
             << WSAGetLastError()
             << endl;

        closesocket(serverSocket);
        WSACleanup();
        sqlite3_close(db);

        return 1;
    }

    cout << "Bind successful!" << endl;

    cout << "Trying to listen on port 8080..." << endl;

    if (listen(
            serverSocket,
            5) == SOCKET_ERROR)
    {
        cout << "Listen failed!" << endl;

        cout << "Error code: "
             << WSAGetLastError()
             << endl;

        closesocket(serverSocket);
        WSACleanup();
        sqlite3_close(db);

        return 1;
    }

    cout << "Listen successful!" << endl;

    cout << "AkshayaMart backend server started!" << endl;

    cout << "Products API: http://localhost:8080/api/products" << endl;

    cout << "Login API: http://localhost:8080/api/login" << endl;

    cout << "Register API: http://localhost:8080/api/register" << endl;

    cout << "Add Product API: http://localhost:8080/api/products/add" << endl;

    cout << "Update Product API: http://localhost:8080/api/products/update" << endl;

    cout << "Delete Product API: http://localhost:8080/api/products/delete" << endl;

    while (true)
    {
        SOCKET clientSocket =
            accept(
                serverSocket,
                nullptr,
                nullptr);

        if (clientSocket == INVALID_SOCKET)
        {
            cout << "Accept failed!" << endl;
            continue;
        }

        char buffer[4096] = {0};

        int received =
            recv(
                clientSocket,
                buffer,
                sizeof(buffer) - 1,
                0);

        if (received <= 0)
        {
            closesocket(clientSocket);
            continue;
        }

        string request(buffer);

        string response;

        if (request.find(
                "GET /api/products") != string::npos)
        {
            string products =
                getProducts(db);

            response =
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: application/json\r\n"
                "Access-Control-Allow-Origin: *\r\n"
                "Connection: close\r\n"
                "\r\n" +
                products;
        }

        else if (request.find(
                     "POST /api/login") != string::npos)
        {
            size_t bodyPosition =
                request.find("\r\n\r\n");

            string body;

            if (bodyPosition != string::npos)
            {
                body =
                    request.substr(
                        bodyPosition + 4);
            }

            string email =
                getFormValue(
                    body,
                    "email");

            string password =
                getFormValue(
                    body,
                    "password");

            string result =
                loginUser(
                    db,
                    email,
                    password);

            response =
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: application/json\r\n"
                "Access-Control-Allow-Origin: *\r\n"
                "Connection: close\r\n"
                "\r\n" +
                result;
        }

        else if (request.find(
                     "POST /api/register") != string::npos)
        {
            size_t bodyPosition =
                request.find("\r\n\r\n");

            string body;

            if (bodyPosition != string::npos)
            {
                body =
                    request.substr(
                        bodyPosition + 4);
            }

            string name =
                getFormValue(
                    body,
                    "name");

            string email =
                getFormValue(
                    body,
                    "email");

            string password =
                getFormValue(
                    body,
                    "password");

            string role =
                getFormValue(
                    body,
                    "role");

            if (role.empty())
                role = "buyer";

            string result =
                registerUser(
                    db,
                    name,
                    email,
                    password,
                    role);

            response =
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: application/json\r\n"
                "Access-Control-Allow-Origin: *\r\n"
                "Connection: close\r\n"
                "\r\n" +
                result;
        }

        else if (request.find(
                     "POST /api/products/add") != string::npos)
        {
            size_t bodyPosition =
                request.find("\r\n\r\n");

            string body;

            if (bodyPosition != string::npos)
            {
                body =
                    request.substr(
                        bodyPosition + 4);
            }

            string name =
                getFormValue(
                    body,
                    "name");

            string category =
                getFormValue(
                    body,
                    "category");

            string price =
                getFormValue(
                    body,
                    "price");

            string quantity =
                getFormValue(
                    body,
                    "quantity");

            string sellerId =
                getFormValue(
                    body,
                    "seller_id");

            if (sellerId.empty())
                sellerId = "1";

            string result =
                addProduct(
                    db,
                    name,
                    category,
                    price,
                    quantity,
                    sellerId);

            response =
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: application/json\r\n"
                "Access-Control-Allow-Origin: *\r\n"
                "Connection: close\r\n"
                "\r\n" +
                result;
        }

        else if (request.find(
                     "POST /api/products/update") != string::npos)
        {
            size_t bodyPosition =
                request.find("\r\n\r\n");

            string body;

            if (bodyPosition != string::npos)
            {
                body =
                    request.substr(
                        bodyPosition + 4);
            }

            string id =
                getFormValue(
                    body,
                    "id");

            string name =
                getFormValue(
                    body,
                    "name");

            string category =
                getFormValue(
                    body,
                    "category");

            string price =
                getFormValue(
                    body,
                    "price");

            string quantity =
                getFormValue(
                    body,
                    "quantity");

            string result =
                updateProduct(
                    db,
                    id,
                    name,
                    category,
                    price,
                    quantity);

            response =
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: application/json\r\n"
                "Access-Control-Allow-Origin: *\r\n"
                "Connection: close\r\n"
                "\r\n" +
                result;
        }

        else if (request.find(
                     "POST /api/products/delete") != string::npos)
        {
            size_t bodyPosition =
                request.find("\r\n\r\n");

            string body;

            if (bodyPosition != string::npos)
            {
                body =
                    request.substr(
                        bodyPosition + 4);
            }

            string id =
                getFormValue(
                    body,
                    "id");

            string result =
                deleteProduct(
                    db,
                    id);

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
            0);

        closesocket(clientSocket);
    }

    closesocket(serverSocket);

    WSACleanup();

    sqlite3_close(db);

    return 0;
}