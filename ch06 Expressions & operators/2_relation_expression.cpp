#include <stdio.h>

int main()
{	
	/*
	relational expression:
		>
		<
		>=
		<=
		==
		!=
		true -> 1
		false -> 0
	*/
	int a = 10;
	int b = 11;
	printf("%d \n", a > b);

	// condition expression: expr1 ? expr2 : expr3
	printf("%d \n", 1 ? 100 : 200); // 100
	printf("%d \n", 0 ? 100 : 200); // 200: 0 -> false

	// 4 conditions combination
	int grade;
	printf("Enter your grade: ");
	scanf_s("%d", &grade);
	printf("%c \n", (grade >= 85) ? 'H' : ((grade >= 75) ? 'D' : ((grade >= 65) ? 'C' : ((grade >= 50) ? 'P' : 'F'))));

	return 0;
}
