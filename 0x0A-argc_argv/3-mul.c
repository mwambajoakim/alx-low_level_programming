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
for (j = 1; j < argc; j++)
{
product *= atoi(argv[j]);
if (argc != 3)
{
	printf("Error\n");
	return (1);
}
}
printf("%d\n", product);
}
return (0);
}
