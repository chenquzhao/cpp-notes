#include <stdio.h>
#include <string.h>

struct Contact
{
	int id;
	char name[16];
	char phone[16];
};

void make(int id, Contact *p) // common way to modify member value
{
	p->id = id;
}

// anonymous struct (unusual)
struct
{
	char guid[128];
	int user_id;
}info;

int main()
{
	// Struct assignment
	Contact a = { 20151421, "Michael", "876876" };
	Contact b = a;

	// Struct pointer
	Contact* p = &a;
	printf("ID: %d, name: %s, phone: %s", p->id, p->name, p->phone); // use '->' to visit member variable

	return 0;
}
