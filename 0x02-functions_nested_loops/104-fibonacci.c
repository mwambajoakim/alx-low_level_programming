#include <stdio.h>
#include <stdint.h>

/**
 * main - Calculates the first 98 fibonacci numbers.
 *
 * Return: 0 is success, 1 unssuccessful.
 */
int main(void)
{
	unsigned long prev = 1L, current = 2L, next;
	int i;
	unsigned long f_prev, l_prev, f_current, l_current, f_next, l_next;

	printf("%lu, %lu", prev, current);

	for (i = 3; i <= 98; i++)
	{
		next = prev + current;
		if (next < current)
		{
			f_prev = prev / 10000000000;
			l_prev = prev % 10000000000;
			f_current = current / 10000000000;
			l_current = current % 10000000000;
			for (; i <= 98; i++)
			{
				f_next = f_prev + f_current;
				l_next = l_prev + l_current;

				if (l_next >= 10000000000)
				{
					l_next -= 10000000000;
					f_next++;
				}
				printf(", %lu%010lu", f_next, l_next);

				f_prev = f_current;
				l_prev = f_current;
				f_current = f_next;
				l_current = l_next;
			}
			break;
		}
		printf(", %lu", current);
		prev = current;
		current = next;
	}
	printf("\n");
	return (0);
}
