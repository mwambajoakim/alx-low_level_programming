#include "lists.h"

/**
 * print_listint - Prints the elements of a list
 * @h: Pointer to head node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *tmp;
	size_t (count) = 0;

	if (h == NULL)
		return (count);

	tmp = h;
	for (; tmp != NULL; count++, tmp = tmp->next)
		printf("%d\n", tmp->n);
	return (count);
}
