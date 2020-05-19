#include <stdio.h>
#include <malloc.h>

int main()
{
	// malloc & free
	// There is a Memory Manager(MM) in system responsible for managing idle memory

	char* p = (char*) malloc(8); // apply 8 bytes

	for(int i = 0; i < 8; i++)
	{
		if(p)
			p[i] = i + 1;
	}

	free(p); // release memory (specify initial address)


	return 0;
}
