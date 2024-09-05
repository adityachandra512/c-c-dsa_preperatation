#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")  // Link with Winsock library

#define PORT 8080

int main() {
    WSADATA wsaData;
    int server_fd, new_socket;
    struct sockaddr_in address, client_address;
    int addrlen = sizeof(address);
    int client_addrlen = sizeof(client_address);
    char buffer[1024] = {0};
    const char *hello = "Hello from server";

    // Initialize Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "WSAStartup failed" << std::endl;
        return -1;
    }

    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        std::cerr << "Socket creation error" << std::endl;
        WSACleanup();
        return -1;
    }

    // Define the server address
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;  // Listen on any IP address
    address.sin_port = htons(PORT);

    // Bind the socket to the port
    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        std::cerr << "Bind failed. Error: " << WSAGetLastError() << std::endl;
        closesocket(server_fd);
        WSACleanup();
        return -1;
    }

    // Listen for incoming connections
    if (listen(server_fd, 3) < 0) {
        std::cerr << "Listen failed. Error: " << WSAGetLastError() << std::endl;
        closesocket(server_fd);
        WSACleanup();
        return -1;
    }

    std::cout << "Waiting for connections..." << std::endl;

    // Accept an incoming connection
    if ((new_socket = accept(server_fd, (struct sockaddr*)&client_address, (socklen_t*)&client_addrlen)) < 0) {
        std::cerr << "Accept failed. Error: " << WSAGetLastError() << std::endl;
        closesocket(server_fd);
        WSACleanup();
        return -1;
    }

    // Retrieve and print the client's IP address
    char *client_ip = inet_ntoa(client_address.sin_addr);
    std::cout << "Connection accepted from client: " << client_ip << std::endl;

    // Read data from the client
    int valread = recv(new_socket, buffer, 1024, 0);
    std::cout << "Message from client: " << buffer << std::endl;

    // Send a response to the client
    send(new_socket, hello, strlen(hello), 0);
    std::cout << "Hello message sent" << std::endl;

    // Close the socket
    closesocket(new_socket);
    closesocket(server_fd);
    WSACleanup();

    return 0;
}