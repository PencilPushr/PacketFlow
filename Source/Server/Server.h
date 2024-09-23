#pragma once

#include <thread>

#ifdef _WIN32
#include <WinSock2.h>
#endif

/*
*			Winsock Server side normally as follows:
*	1. Initialize WSA				– WSAStartup().
*	2. Create a socket				– socket().
*	3. Bind the socket to an address	– bind().
*	4. Listen for incoming connections	– listen().
*	5. Accept a connection			– accept().
*	6. Send and receive data		– recv(), send(), recvfrom(), sendto().
*	7. Disconnect					– closesocket().
*
*	IPv4 uses - sockaddr_in, in_addr
*	IPv6 uses - addrinfo, sockaddr
*
*/

class Server
{
public:
	Server();
	~Server();

};