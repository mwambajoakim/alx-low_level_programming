#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0
 * @n: Integer
 * @index: Index of bit
 *
 * Return: 1 if successful, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * CHAR_BIT)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
