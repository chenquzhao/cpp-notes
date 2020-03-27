#include <stdio.h>
#include <string.h>
// struct: a new data type (self-defined)
/*
	struct TypeName
	{
		Members
	}
*/
struct Contact
{
	int id;
	char name[16];
	char phone[16];
};

Contact c; // as variable
Contact student[4]; // as array
Contact* pc = &c; // as address
void test(Contact x); // as parameter
Contact make(int d); // as function

int main()
{
	// initialization
	Contact a;
	Contact b = { 20151420, "George", "123456" };
	Contact c[3] = {
		{20151419, "Kwahi", "123786"},
		{20151421, "Gordon", "23141"},
		{20152417, "Jakie", "2138974"}
	};

	// visit (read & write)
	a.id = 20160710;
	strcpy(a.name, "Jason");
	strcpy(a.phone, "980711");

	printf("%d\t%s\t%s \n", a.id, a.name, a.phone);
	printf("%d\t%s\t%s \n", c[0].id, c[0].name, c[0].phone);

	return 0;
}
