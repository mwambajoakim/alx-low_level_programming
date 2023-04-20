#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that gives least amount of change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	unsigned long int i;
	int cents[] = {25, 10, 5, 2, 1};
	int total, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]), count = 0;

	if (total < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; total > 0 && i < sizeof(cents) / sizeof(cents[0]); i++)
	{
		count += total / cents[i];
		total %= cents[i];
	}

	printf("%d\n", count);

	return (0);
}
