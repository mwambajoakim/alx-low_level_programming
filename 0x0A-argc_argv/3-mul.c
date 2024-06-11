#include <stdlib.h>
#include <stdio.h>

/**
 *main - function that receives CL Arguments
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return:0 is success
 */

int main(int argc, char *argv[])
{
	int product = 1;
	int count = 1;

	if (argc == 1)
	{
		printf("Error\n");
	}

	else
	{
		for (count = 1; count < argc; count++)
			product *= atoi(argv[count]);
	printf("%d\n", product);
	}

	return (0);
}
