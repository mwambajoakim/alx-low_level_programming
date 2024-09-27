#include <stdio.h>

/**
 *main - entry point
 *
 * Return: 0 is success
 */

int main(void)
{
	int a;
	int b;
	int c;

for (a = 0; a <= 7; a++)
{
	for (b = a; b <= 8; b++)
	{
		for (c = b; c <= 9; c++)
		{
			if (a != b && b != c && a != c)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
