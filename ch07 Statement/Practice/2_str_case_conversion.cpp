/*
	Giving a string 'str', Try changing the lowercase letter in the array to uppercase, 
		and the uppercase letter to lowercase
*/
#include <stdio.h>

int main()
{	
	char str[] = "http://pan.baidu.com/s/1qWDQ04O";
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 'a' - 'A';
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}

	printf("Result: %s", str);

	return 0;
}
