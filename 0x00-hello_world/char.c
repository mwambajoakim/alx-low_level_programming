#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(void)
{
	char c;

		c = CHAR_MIN;
	while (c != CHAR_MAX)
	{
		printf("%d", c);
		printf(" ");
		c++;
	}
	printf("\n");
	exit(EXIT_SUCCESS);
}
