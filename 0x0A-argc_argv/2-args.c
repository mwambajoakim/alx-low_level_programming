#include <stdio.h>

/**
*main - entry point
*@argc: argument count
*@argv: argument vector
*Return: 0 is success
*/

int main(int argc, char *argv[])
{

int m;

for (m = 0; m < argc; m++)
	printf("%s\n", argv[m]);

return (0);
}
