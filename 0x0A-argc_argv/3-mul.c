#include <stdlib.h>
#include <stdio.h>

/**
*main - entry point
*@argc: argument count
*@argv: argument vector
*Return: 0
*/

int main(int argc, char *argv[])
{
int j, product = 1;
if (argc > 1)
{
	if (j > 2)
	{
		printf("Error\n");
		return (1);
	}
else
{
	for (j = 1; j < argc; j++)
	product *= atoi(argv[j]);
	
	printf("%d\n", product);
}
}
return (0);
}
