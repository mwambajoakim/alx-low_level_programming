#include <stdio.h>

/**
 * main - Entry oint function.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 is success.
 */

int main(int argc, char *argv[])
{
	int i;

	for ( i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
