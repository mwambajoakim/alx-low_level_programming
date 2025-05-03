#include "lists.h"

/**
 * list_len - Return number of nodes in a list.
 * @h: Pointer to a struct (node).
 *
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h);
{
	/*const list_t temp  = h;*/
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
