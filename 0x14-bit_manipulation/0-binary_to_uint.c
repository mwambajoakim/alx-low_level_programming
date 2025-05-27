#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: Pointer string of binary numbers
 *
 * Return: An unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		res = (res << 1) | (*b - '0');
		b++;
	}
	return (res);
}
