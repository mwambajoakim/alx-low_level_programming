#include "lists.h"

/**
 * get_nodeint_at_index - Get a node at index index
 * @head: Pointer to head node
 * @index: Pointer to node index
 *
 * Return: The node searched for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL && i < index)
	{
		if (i == index)
		{
			return (tmp);
		}
		tmp = tmp->next
		i++;
	}
	return (tmp);
}
