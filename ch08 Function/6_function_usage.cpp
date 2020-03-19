#include <stdio.h>	

int is_alpha(char ch); // function declaration (prototype)

int main() // program starting point
{	
	char s = 's';
	printf("%c is a character: %d", s, is_alpha(s)); // function invoke

	return 0;
}

int is_alpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return 1;
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
