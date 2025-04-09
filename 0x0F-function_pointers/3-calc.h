#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


#endif /*CALC_H*/
