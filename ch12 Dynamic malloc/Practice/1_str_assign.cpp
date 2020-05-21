#include <stdio.h>
#include <malloc.h>
#include <string.h>

char* getMemory()
{
	char* buf = (char*)malloc(128);
	if (buf)
		strcpy(buf, "hello");

	return buf;
}

int main()
{
	// legal, str points to a brunch of memory
	char* str = getMemory();
	printf(str);

	free(str);

	return 0;
}
