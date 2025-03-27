#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point function.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 is succes, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
	}
	printf("%d\n", mult);
	return (0);
}
