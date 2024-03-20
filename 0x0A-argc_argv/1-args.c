#include <stdlib.h>
#include <stdio.h>

/**
 *main - function that receives CL Arguments
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0 is success
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int count = 0;

	if (argc == 1)
	{
		printf("%d\n", count);
	}
	else if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
