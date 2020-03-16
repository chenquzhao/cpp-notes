/*
	Design voting algorithm: 5 people vote, when 3 or more people agree, vote through
	For example:
		A> Y
		B> N
		C> Y
		D> Y
		E> N
	Result: Pass
*/
#include <stdio.h>

int main()
{	
	char ch = 'A';
	char result = 0;
	for (int i = 0; i < 5; i++)
	{
		char buf[32];
		printf("%c> ", ch);
		gets_s(buf);
		if (buf[0] == 'Y' || buf[0] == 'y')
		{
			result += 1;
			if (result == 3)
			{
				printf("Pass");
				return 0;
			}
		}
		ch += 1;
	}

	printf("Fail");
	return 0;
}
