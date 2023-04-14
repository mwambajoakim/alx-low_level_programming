#include <stdio.h>

/**
*main - Entry point
*@argc: argument count
*@argv: argument vector
*Return: 0 is success
*/

int main(int argc, char *argv)
{
int k;
for (k = 0; k < argc; k++)
{
	printf("%d", k);
}
printf("\n");
}
