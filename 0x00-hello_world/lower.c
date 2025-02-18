#include <stdio.h>


int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		printf("%d - %c\n", c, c);

		c++;
	}

	return (0);
}
