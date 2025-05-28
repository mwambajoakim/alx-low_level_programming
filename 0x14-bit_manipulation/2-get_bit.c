#include "main.h"

/**
 * get_bit - Returns value of bit at given index
 * @n: Integer
 * @index: Index of bit
 *
 * Return: Bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, res;

	if (index >= sizeof(n) * CHAR_BIT)
	{
		return (-1);
	}
	mask = 1 << index;
	res = (n & mask) >> index;

	return (res);
}
