#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name
 * @name: pointer to the string containing the name
 * @f: pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
int i;
	for (i = 0; name[i] != '\0'; i++)
	{
		f(name);
	}

}
