#include "main.h"

/**
 * flip_bits - Checks number of bits to flip to get another number
 * @n: Integer one
 * @m: Integer two
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int i, bit_num = 0;

	for (i = 0; i < sizeof(res) * CHAR_BIT; i++)
	{
		if (res & (1UL << i))
			bit_num++;
	}
	return (bit_num);
}
