/*
	Given two strings: SRC and DST
	The requirement is to use DST as a filter, that is, every character that appears in DST is filtered in SRC.
*/
#include <stdio.h>

int main()
{	
	char src[] = "hello,world!";
	char dst[] = "do";
	char res[32];

	int index = 0;
	for (int i = 0; src[i] != 0; i++)
	{
		if (src[i] == dst[0] || src[i] == dst[1])
			continue;
		res[index] = src[i];
		index += 1;
	}

	res[index] = '\0';

	return 0;
}
