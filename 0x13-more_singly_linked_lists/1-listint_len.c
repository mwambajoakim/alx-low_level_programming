#include "lists.h"

/**
 * listint_len - Returns number of nodes
 * @h: Pointer to head node
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t count = 0;

	if (h == NULL)
		return (count);

	tmp = h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
