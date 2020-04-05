/*
	Network address SocketAddr in network programming contains the following information:
		IP address: consists of four bytes, each bounded between 0 and 255
		Port number: bound at 0-65535
	Try to define a structure to represent the above information.
*/
#include <stdio.h>

struct SocketAddr
{
	unsigned char ip[4];
	unsigned short port;
};

int input(SocketAddr* addr)
{
	unsigned int a, b, c, d, e;

	printf("Please input address, example: 192.168.1.1:1280...\n");
	scanf_s("%u.%u.%u.%u:%u", &a, &b, &c, &d, &e);

	addr->ip[0] = (unsigned char) a;
	addr->ip[1] = (unsigned char) b;
	addr->ip[2] = (unsigned char) c;
	addr->ip[3] = (unsigned char) d;
	addr->port = (unsigned short) e;

	return 0;
}

int main()
{
	SocketAddr addr;
	input(&addr);

	return 0;
}
