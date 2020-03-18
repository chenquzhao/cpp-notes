#include <stdio.h>	

/*
	Function without parameter:

	return_type name ()
	{
		body
	}
	*/
int test()
{
	return 1; // return a value, quit the function
}

/*
	Function without return:

	void name()
	{
		body
	}
*/
void welcome()
{
	printf("Hello!");
	return; // can be used to quit function
}

int main()
{	
	printf("%d \n", test());
	welcome();
	
	return 0;
}
