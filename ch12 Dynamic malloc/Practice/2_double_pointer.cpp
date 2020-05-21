#include <stdio.h>
#include <malloc.h>
#include <string.h>

void getMemory(char** p)
{
	char* buf = (char*)malloc(128);
	if (buf)
		strcpy(buf, "hello");

	*p = buf;
}

int main()
{
	// legal, str points to a brunch of memory
	char* str = NULL;

	getMemory(&str);
	printf(str);

	free(str);

	return 0;
}
