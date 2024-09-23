#pragma once

#include <iostream>
#include <thread>
#include <string>

/*
*			Winsock Client side normally as follows:
*	1. Initialize WSA			– WSAStartup().
*	2. Create a socket			– socket().
*	3. Connect to the server	– connect().
*	4. Send and receive data	– recv(), send(), recvfrom(), sendto().
*	5. Disconnect				– closesocket().
*	
*	IPV4 uses - sockaddr_in, in_addr
*	IPV6 uses - addrinfo, sockaddr
* 
*/


class Client
{
public:
	Client(
		const std::string& server_address, 
		const int server_port
	);
	~Client();

};