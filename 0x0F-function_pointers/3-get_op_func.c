#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - a function that fetches an operator
 * @s: pointer to string with operators
 * Return: 0 is success
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);
	}
	return (0);
}
