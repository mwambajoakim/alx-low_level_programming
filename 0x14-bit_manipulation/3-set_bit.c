#include "main.h"

/**
 * set_bit - Sets value of bit to 1
 * @n: Integer
 * @index: Index of bit
 *
 * Return: 1 if successful, 0 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * CHAR_BIT)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}
