#include <stdio.h>

/**
 * main - a program that writes all the arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is success
*/

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
	printf("%s\n", argv[j]);
	}
	return (0);
}
