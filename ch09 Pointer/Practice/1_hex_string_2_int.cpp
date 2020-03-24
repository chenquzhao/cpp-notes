/*
	Convert a Hex string to unsigned int.
	For example:
		"12AB3d" -> 1223485(0x12AB3D)
*/
#include <stdio.h>

unsigned int hex_to_int(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return ch - '0';
	}
	if (ch >= 'a' && ch <= 'z')
	{
		return ch - 'a' + 10;
	}
	if (ch >= 'A' && ch <= 'Z')
	{
		return ch - 'A' + 10;
	}
	return 0;
}

unsigned int hex_reader(char* p, int len)
{
	unsigned int num = 0;
	for (int i = 0; i < len; i++)
	{
		unsigned int n = hex_to_int(p[i]);
		num = (num << 4) + n;
	}
	return num;
}

int main()
{
	char buf[] = "12AB3d";
	unsigned int result = hex_reader(buf, 6);

	printf("Result: %u", result);
	return 0;
}
