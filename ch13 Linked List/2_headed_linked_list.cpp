#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	int id;
	char name[16];
	Student* next;
};

// *** Headed Linked List ***
// define a head node
// Student m_head = { 0, "head", NULL }; //same as below
Student m_head = { 0 };

// add an object at head
void add_head(Student* s)
{
	s->next = m_head.next;
	m_head.next = s;
}

// add an object at tail
void add_tail(Student* s)
{
	Student* p = &m_head;
	while (p->next)
	{
		p = p->next;
	}

	p->next = s;
	s->next = NULL;
}

// traverse
void show_all()
{
	Student* p = m_head.next; // exclude head node

	while (p)
	{
		printf("ID: %d, Name: %s", p->id, p->name);
		p = p->next;
	}
}

int main()
{
	Student* s1 = (Student*)malloc(sizeof(Student));
	s1->id = 1;
	strcpy(s1->name, "X");
	add_tail(s1);

	Student* s2 = (Student*)malloc(sizeof(Student));
	s2->id = 2;
	strcpy(s2->name, "Y");
	add_tail(s2);

	return 0;
}
