#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_integer - checks for non integer value
 * @s: string to check
 * Return: bool
 */
bool is_integer(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] < '0' || s[j] > '9')
		{
			return (false);
		}
	}
	return (true);
}
/**
 * main - add positive numbers only
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
	{
	int j, num, sum = 0;

	for (i = 1; j < argc; j++)
	{
		if (is_integer(argv[j]))
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
