#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Pointer to string name.
 * @f: Pointer to function.
 */
void print_name(char *name, void (*f)(char *))
{
	void (*tmp_func)(char *);

	if (name == NULL)
	{
		name = "";
	}
	if ((*f) == NULL)
	{
		return;
	}
	tmp_func = f;
	(*tmp_func)(name);
}
