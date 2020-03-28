/*
	Requirements: to achieve a student record entry and query procedures. 
	The information of each student is: student ID, name, grade (IR, ML and DL). 
	The following functions are required:
		#1 can enter student information in the Console
		#2 can query the number of students already entered
		#3 can look up information about a student by name
		#4 the results of all students can be displayed in a list
*/

#include <stdio.h>
#include <string.h>

struct Student
{
	int id;
	char name[16];
	int scores[3];
};

Student data[100]; // source data: store all data
int count = 0;

// read user input
void input(Student *s) 
{
	printf("ID: ");
	scanf_s("%d", &s->id);

	printf("Name: ");
	scanf_s("%s", s->name, sizeof(s->name));

	printf("Score: ");
	scanf_s("%d, %d, %d", &s->scores[0], &s->scores[1], &s->scores[2]);
}

// add student to data source
int add(const Student *s)
{
	data[count] = *s;
	count += 1;
	return 0;
}

// print out schema
void list_all()
{
	printf("ID \tName \tScore \n");
	for (int i = 0; i < count; i++)
	{
		Student* s = &data[i];
		printf("%d \t%s \t%d,%d,%d \n",
				s->id, 
				s->name,
				s->scores[0], s->scores[1], s->scores[2]);
	}
}

// search student in data source
Student* find(const char* name)
{
	for (int i = 0; i < count; i++)
	{
		Student* s = &data[i];
		if (strcmp(name, s->name) == 0)
		{
			return s;
		}
	}
	return NULL;
}

int main()
{
	char cmdline[128] = "";
	while (1)
	{
		printf("> ");
		scanf_s("%s", &cmdline, sizeof(cmdline));

		// menu
		if (strcmp(cmdline, "add") == 0)
		{
			Student s;
			input(&s);
			add(&s);
			continue;
		}

		if (strcmp(cmdline, "list") == 0)
		{
			list_all();
			continue;
		}

		if (strcmp(cmdline, "count") == 0)
		{
			printf("Total: %d \n", count);
			continue;
		}

		if (strcmp(cmdline, "find") == 0)
		{
			printf("enter Name: \n");
			char name[16];
			scanf_s("%s", name, sizeof(name));

			Student* s = find(name);
			if (s)
			{
				printf("Found %s \n", s->name);
				printf("ID: %d, Name: %s, Score: %d, %d, %d \n",
					s->id, s->name, s->scores[0], s->scores[1], s->scores[2]
					);
			}
			else
			{
				printf("Not found \n");
			}
			continue;
		}

		// exit
		if (strcmp(cmdline, "exit") == 0)
		{
			printf("now exit...\n");
			break;
		}

		printf("Bad Input \n");
	}
	return 0;
}
