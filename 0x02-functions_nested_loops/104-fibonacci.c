#include <stdio.h>

/**
 * main - Calculates fibonacci for the first 98 numbers.
 *
 * Return: 0 is success, 1 unssuccessful.
 */
int main(void)
{
	long int prev = 1;
	long int current = 2;
	long int next;
	unsigned int i;

	printf("%ld, %ld, ", prev, current);

	for (i = 0; i < 98; i++)
	{
		next = prev + current;
		prev = current;
		current = next;
		if (i < 97)
		{
			printf("%ld, ", current);
		}
		else
		{
			printf("%ld", current);
		}
	}
	printf("\n");
	return (0);
}
