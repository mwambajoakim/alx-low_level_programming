#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: name to print
 * @f: function of name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	f(name);
	}
}
