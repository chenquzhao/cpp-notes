/*
	Convert a Bin string to unsigned int.
	For example:
		"11010011" -> 211
*/
#include <stdio.h>

int strlen(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

unsigned int bin_to_int(char ch)
{
	if (ch == '0')
	{
		return 0;
	}
	if (ch == '1')
	{
		return 1;
	}
	return -1;
}

unsigned int bin_reader(const char* p, int len)
{
	unsigned int num = 0;
	for (int i = 0; i < len; i++)
	{
		unsigned int n = bin_to_int(p[i]);
		num = (num << 1) + n;
	}
	return num;
}

int main()
{
	char buf[] = "11010011";
	unsigned int result = bin_reader(buf, strlen(buf));

	printf("Result: %u", result);
	return 0;
}
