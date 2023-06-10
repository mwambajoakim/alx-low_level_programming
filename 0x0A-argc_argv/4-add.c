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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
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
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_integer(argv[i]))
		{
			num = atoi(argv[i]);
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
