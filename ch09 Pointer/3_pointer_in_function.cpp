#include <stdio.h>
// pointer benifits: may return multiple values in a function

void test(int* p) // pass address to function
{
	printf("Before test: %d \n", *p);
	*p = 1; // modify value in previous layer!!!
}

// pass array as parameter
double avg(int* p, int len) // initial address & [length] required
{
	int sum = 0; 
	for (int i = 0; i < len; i++)
	{
		sum += p[i];
	}
	return (double)sum / len;
}

// find min and max value
void min_max(int* p, int len, int* pmax, int* pmin)
{
	int max = p[0];
	int min = p[0];

	for (int i = 1; i < len; i++)
	{
		if (p[i] < min)
		{
			min = p[i];
		}

		if (p[i] > max)
		{
			max = p[i];
		}
	}
	*pmax = max;
	*pmin = min;
}


int main()
{
	int a = 0;
	test(&a);
	printf("Now: %d \n", a);

	int arr[] = { 1,2,3,4 };
	double ret;
	ret = avg(arr, 4);

	int max;
	int min;
	min_max(arr, 4, &max, &min);

	return 0;
}
