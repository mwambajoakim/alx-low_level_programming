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

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
