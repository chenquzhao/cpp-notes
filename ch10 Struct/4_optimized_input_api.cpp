#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Remove space characters from the head and tail
// Note: do not create new buffer, no copy and move
// return NULL if length is 0
char* trim_s(char* src)
{
	int i = 0;
	char* p = src;
	char* ps = 0; // pointer start
	char* pf = 0; // pointer finish

	// seek the first valid character
	while (p[i] != '\0')
	{
		if (p[i] != ' ')
		{
			ps = &p[i];
			break;
		}
		i += 1;
	}

	if (ps == NULL) // no valid character(all blank)
	{
		return NULL;
	}

	// seek the last valid character
	bool non_blank = true;
	
	while (p[i] != '\0')
	{
		if (p[i] == ' ')
		{
			if (non_blank)
			{
				pf = &p[i];
				non_blank = false;
			}
		}
		else
		{
			non_blank = true;
		}
		i += 1;
	}

	// valid len == 0
	if (ps == pf)
	{
		return NULL;
	}

	// cut the rear blanks
	if (pf)
	{
		*pf = '\0';
	}

	return ps;
}

// input a string, save it in 'output' (trimmed automatically)
char* get_string_s(char* output)
{
	char buf[128];
	gets_s(buf);
	char* str = trim_s(buf);

	if (str == NULL)
	{
		output[0] = '\0';
		return NULL;
	}
	else
	{
		memcpy(output, str, strlen(str)+1);
		return output;
	}
}

// obtain a integer, return defValue if input is null
int get_integer_s(int defValue)
{
	char buf[512];
	char* str = get_string_s(buf);
	if (str == NULL)
		return defValue;
	else
		return atoi(str);
}

// obtain a double, return defValue if input is null
double get_double_s(double defValue)
{
	char buf[512];
	char* str = get_string_s(buf);
	if (str == NULL)
		return defValue;
	else
		return atof(str);
}

// obtain a character, return defValue if input is null
char get_char_s(char defValue)
{
	char buf[512];
	char* str = get_string_s(buf);
	if (str == NULL)
		return defValue;
	else
		return str[0];

}

// obtain a bool, return defValue if input is null
bool get_bool_s(bool defValue)
{
	char buf[512];
	char* str = get_string_s(buf);
	if (str == NULL)
		return defValue;
	else
	{
		if (strcmp(str, "YES") == 0 || strcmp(str, "TRUE") == 0)
			return true;
		return false;
	}
}

struct User
{
	int id;
	char name[128];
	char phone[32];
	bool vip;
};

int main()
{
	User u;
	u.id = get_integer_s(0);
	get_string_s(u.name);
	get_string_s(u.phone);
	u.vip = get_bool_s(true);

	return 0;
}
