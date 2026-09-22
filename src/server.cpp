#include <winsock2.h>
#include <iostream>
#include <string>
#include <sqlite3.h>

#pragma comment(lib, "ws2_32.lib")

using namespace std;

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

    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    if (serverSocket == INVALID_SOCKET)
    {
        cout << "Socket creation failed!" << endl;
        WSACleanup();
        sqlite3_close(db);
        return 1;
    }

    sockaddr_in serverAddress{};
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(8080);

    if (bind(serverSocket, (sockaddr*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR)
    {
        cout << "Bind failed!" << endl;
        closesocket(serverSocket);
        WSACleanup();
        sqlite3_close(db);
        return 1;
    }

    if (listen(serverSocket, 5) == SOCKET_ERROR)
    {
        cout << "Listen failed!" << endl;
        closesocket(serverSocket);
        WSACleanup();
        sqlite3_close(db);
        return 1;
    }

    cout << "AkshayaMart backend server started!" << endl;
    cout << "Open http://localhost:8080" << endl;

    while (true)
    {
        SOCKET clientSocket = accept(serverSocket, nullptr, nullptr);

        if (clientSocket == INVALID_SOCKET)
            continue;

        string response =
            "HTTP/1.1 200 OK\r\n"
            "Content-Type: text/html\r\n"
            "Connection: close\r\n"
            "\r\n"
            "<html>"
            "<head><title>AkshayaMart</title></head>"
            "<body>"
            "<h1>AkshayaMart Backend</h1>"
            "<p>C++ Backend and SQLite Database are connected!</p>"
            "</body>"
            "</html>";

        send(clientSocket, response.c_str(), response.length(), 0);

        closesocket(clientSocket);
    }

    closesocket(serverSocket);
    WSACleanup();
    sqlite3_close(db);

    return 0;
}