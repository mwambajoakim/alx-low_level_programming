#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - function to check if there is a digit
 * @k: string to check
 * Return: bool
*/

bool is_digit(char *k)
{
	int j;

	for (j = 0; k[j] != '\0'; j++)
	{
	if (k[j] < '0' || k[j] > '9')
	{
	return (false);
	}
	}
	return (true);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is success
*/

int main(int argc, char *argv[])
{
	int j, num, sum = 0;

	for (j = 1; j < argc; j++)
	{
	if (is_digit(argv[j]))
	{
		num = atoi(argv[j]);
		if (num > 0)
		{
		sum += num;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	printf("%d\n", sum);
	return (0);
}
