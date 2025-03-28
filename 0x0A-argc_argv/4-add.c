#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point function.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 is success, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 2)
	{
		printf("%d\n", 0);
	}

	if (argc > 2)
	{
		for (i = 2; i < argc; i++)
		{
			if (!is_number(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
