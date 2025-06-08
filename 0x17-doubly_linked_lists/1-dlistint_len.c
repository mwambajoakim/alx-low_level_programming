#include "lists.h"

/**
 * dlistint_len - Prints the number of wlwmwnts in a list
 * @h: Pointer to the head node
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
