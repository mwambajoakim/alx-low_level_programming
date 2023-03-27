#include "main.h"

/**
 *swap_int - Functions that swaps two integers
 *
 *@a: integer to be tested
 *@b: integer to be tested
 *
 *Return: nothing
 *
 */

void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;

return;
}
