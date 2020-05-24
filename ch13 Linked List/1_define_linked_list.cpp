#include <stdio.h>

struct Student
{
	int id;
	char name[16];
	Student* next;
};

Student s[4] =
{
	{202001, "John", 0},
	{202002, "David", 0},
	{202003, "Chris", 0},
	{202004, "Patrick", 0}
};

// find student with specified id
Student* find(Student* s,int id)
{
	while (s)
	{
		if (s->id == id)
			return s;

		s = s->next;
	}

	return NULL;
}

int main()
{
	// create a LinkedList
	s[0].next = &s[1];
	s[1].next = &s[2];
	s[2].next = &s[3];
	s[3].next = 0;

	// traverse LinkedList
	Student* p = &s[0];
	while (p)
	{
		printf("ID: %d, Name: %s\n", p->id, p->name);
		p = p->next;
	}

	// find target
	Student* target = find(&s[0], 202002);
	printf("Target student is %s", target->name);

	return 0;
}
