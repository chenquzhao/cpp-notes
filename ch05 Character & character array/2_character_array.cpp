#include <stdio.h>

int main()
{	
	// character array 
	char str[6] = {'h','e','l','l','o','\0'};
	char str_[6] = "hello"; // same as above

	// escape character
	char addr[] = "d:\\cpp\\hello\\";
	
	// end character '\0' (0)
	char hello[] = "hello";
	hello[2] = '\0';
	printf("%s", hello);

	return 0;
}
