#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string>  // For std::string

#pragma comment(lib, "ws2_32.lib")  // Link with Winsock library

#define PORT 8080
#define SERVER_IP "10.1.79.90"  // Replace with your server's IP address

int main() {
    WSADATA wsaData;
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[1024] = {0};

    // Initialize Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "WSAStartup failed" << std::endl;
        return -1;
    }

    // Create socket
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        std::cerr << "Socket creation error" << std::endl;
        WSACleanup();
        return -1;
    }

    // Define the server address
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 address from text to binary using inet_addr (legacy function)
    serv_addr.sin_addr.s_addr = inet_addr(SERVER_IP);
    if (serv_addr.sin_addr.s_addr == INADDR_NONE) {
        std::cerr << "Invalid address. Address conversion failed." << std::endl;
        closesocket(sock);
        WSACleanup();
        return -1;
    }

    // Connect to the server
    if (connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0) {
        std::cerr << "Connection Failed. Error: " << WSAGetLastError() << std::endl;
        closesocket(sock);
        WSACleanup();
        return -1;
    }

    // Take input from the user
    std::string user_message;
    std::cout << "Enter the message to send to the server: ";
    std::getline(std::cin, user_message);

    // Send the user's message to the server
    send(sock, user_message.c_str(), user_message.length(), 0);
    std::cout << "Message sent to server: " << user_message << std::endl;

    // Receive response from the server
    int valread = recv(sock, buffer, 1024, 0);
    std::cout << "Message from server: " << buffer << std::endl;

    // Close the socket
    closesocket(sock);
    WSACleanup();

    return 0;
}
