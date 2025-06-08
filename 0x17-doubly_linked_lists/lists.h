#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dlistint_s - doubly linked list node
 * @n: integer
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

#endif /* LISTS_H */
