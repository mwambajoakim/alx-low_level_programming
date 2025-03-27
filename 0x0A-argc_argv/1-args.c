#include <stdio.h>

/**
 * main - Entry point function.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 is success.
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
