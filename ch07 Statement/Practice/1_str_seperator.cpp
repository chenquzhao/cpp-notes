/*
	Giving source string 'src', now input a character, intercept the remaining characters.
	For example:
		src: "testroad"
		input: 'r'
		output: "test"
*/
#include <stdio.h>

int main()
{	
	char buf[] = "testroad";
	char ch;

	printf("Input a seperator: ");
	scanf_s("%c", &ch, sizeof(ch));

	int i = 0;
	while (buf[i] != 0)
	{
		if (buf[i] == ch)
		{
			buf[i] = 0;
		}
		i++;
	}

	printf("Result: %s", buf);
	return 0;
}
