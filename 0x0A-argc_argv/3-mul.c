#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is success
*/

int main(int argc, char *argv[])
{
	int j, mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (j = 1; j < argc; j++)
		{
			mul *= atoi(argv[j]);
		}
		printf("%d\n", mul);
	}

	return (0);
}
