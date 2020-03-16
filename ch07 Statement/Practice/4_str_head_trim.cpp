/*
	Delete the white space character from the string header
*/
#include <stdio.h>

int main()
{	
	char buf[] = "     Hello World";

	int count = 0;

	for (int i = 0; ; i++)
	{
		if (buf[i] == ' ')
		{
			count += 1;
		}
		else
		{
			break;
		}
	}

	for (int j = count;; j++)
	{
		buf[j - count] = buf[j];
		if (buf[j] == 0)
		{
			break;
		}
	}

	printf("Result: %s", buf);

	return 0;
}
