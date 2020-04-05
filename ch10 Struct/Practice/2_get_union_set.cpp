/*
	Given two array, acquire their union set.
	Hint: Use object-oriented thinking to solve this problem
*/
#include <stdio.h>

struct Buffer
{
	int nums[128];
	int count;
};

void Init(Buffer* b)
{
	b->count = 0;
}

int Exist(Buffer* b, int num)
{
	for (int i = 0; i < b->count; i++)
	{
		if (b->nums[i] == num)
		{
			return 1;
		}
	}
	return 0;
}

void Add(Buffer* b, int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (Exist(b, arr[i]) == 0)
		{
			b->nums[b->count] = arr[i];
			b->count += 1;
		}
	}
}

int main()
{
	Buffer buf;
	Init(&buf);
	int a[] = { 1,2,2,3 };
	int b[] = { 3,4,5,5 };

	Add(&buf, a, 4);
	Add(&buf, b, 4);

	return 0;
}
