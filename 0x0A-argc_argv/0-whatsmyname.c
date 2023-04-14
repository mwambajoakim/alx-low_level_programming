#include <stdio.h>

/**
*main - entry point
*@argc: argument count
*@argv: argument vector
*Return: 0
*/

int main(int argc, char *argv[])
{
int k;
for (k = 0; k < argc; k++)
{
	printf("%s", argv[k]);
}
printf("\n");

return (0);

}
