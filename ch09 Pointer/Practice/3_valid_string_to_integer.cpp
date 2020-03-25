/*
	Implement a string to integer function.
	For example:
		"123" -> 123, ok = 1
		"-123" -> -123, ok = 1
		"12s3" -> ok = 0
*/
#include <stdio.h>

int str2int(const char* str, int* ok)
{
	int mark = 0;
	int result = 0;
	int i = 0;

	if (str[0] == '-')
	{
		mark = 1;
		i = 1;
	}

	for (; str[i] != '\0'; i++)
	{
		char ch = str[i];
		if (ch < '0' || ch > '9')
		{
			*ok = 0;
			return i;
		}
		result = result * 10 + (ch - '0');
	}

	*ok = 1;
	if (mark)
	{
		return -result;
	}
	return result;
}

int main()
{
	int ok = 0;

	int result = str2int("-1a23", &ok);
	if (ok)
	{
		printf("result: %d \n", result);
	}
	else
	{
		printf("Fail: Illegal character, position: %d !\n", result);
	}
	return 0;
}
