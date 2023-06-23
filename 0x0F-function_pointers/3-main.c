#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - a function that does baasic operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is success
*/

int main(int argc, char *argv[])
{
	int (*operate)(int, int);

	if (argc != 4)
	{
	printf("Error");
	exit(98);
	}

	operate = get_opt_func;

	if (!operate)
	{
	printf("Error");
	exit(99);
	}

	printf("%d\n", operate(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
