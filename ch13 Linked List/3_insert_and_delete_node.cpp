#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	int id;
	char name[16];
	Student* next;
};

Student m_head = { 0 };

// insert object according to the order of ID
int insert(Student* s)
{
	// double pointer
	Student* pr = &m_head;
	Student* p = m_head.next;

	while (p)
	{
		if (p->id > s->id)
		{
			break;
		}

		pr = p;
		p = p->next;
	}

	// insert after pr
	s->next = pr->next;
	pr->next = s;

	return 0;
}

void show_all()
{
	Student* p = m_head.next;

	while (p)
	{
		printf("ID: %d, Name: %s \n", p->id, p->name);

		p = p->next;
	}
}

// search by id and remove
void remove(int id)
{
	Student* pr = &m_head;
	Student* p = m_head.next;

	while (p)
	{
		if (p->id == id)
		{
			// delete node
			pr->next = p->next;
			free(p);
			break;
		}

		pr = p;
		p = p->next;
	}
}

int main()
{
	Student* s = NULL;

	s = (Student*)malloc(sizeof(Student));
	s->id = 1;
	strcpy(s->name, "111");
	insert(s);

	s = (Student*)malloc(sizeof(Student));
	s->id = 3;
	strcpy(s->name, "333");
	insert(s);

	s = (Student*)malloc(sizeof(Student));
	s->id = 4;
	strcpy(s->name, "444");
	insert(s);

	s = (Student*)malloc(sizeof(Student));
	s->id = 8;
	strcpy(s->name, "888");
	insert(s);

	s = (Student*)malloc(sizeof(Student));
	s->id = 5;
	strcpy(s->name, "555");
	insert(s);

	//remove(3);
	show_all();

	/*
	Conclusion: Headed Linked List is better than array on insert & delete operation, which saves a lot of CPU.
	*/
	return 0;
}
