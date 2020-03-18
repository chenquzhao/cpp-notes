#include <stdio.h>	

/*
life cycle and scope of local variable:
	# start from definition
	# end with corresponding brace

for global variables:
	# life cycle exists all the time during the program excuting
*/
int main()
{	
	if (1)
	{
		int b = 10;
		printf("%d", b); //  work
	}

	printf("%d", b); // not work, variable failure

	return 0;
}
