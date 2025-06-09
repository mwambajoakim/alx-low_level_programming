#include "lists.h"

/**
 * get_dnodeint_at_index - Returns node at index
 * @head: Pointer to head node
 * @index: Index of node
 *
 * Return: Returns the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	while (temp != NULL && i < index)
	{
		++i;
		temp = temp->next;
	}
	if (i == index)
		return (temp);

	return (temp);
}
