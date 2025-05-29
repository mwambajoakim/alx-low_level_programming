#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 1 if little, 0 if big
 */
int get_endianness(void)
{
	int value = 1;
	int *r = (int *)&value;

	if (*r == value)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
