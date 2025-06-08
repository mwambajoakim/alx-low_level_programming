#include "lists.h"

/**
 * print_dlistint - Prints the elements in a list
 * @h: Pointer to the heade node
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
