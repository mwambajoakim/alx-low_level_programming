#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at given index
 * @head: Pointer to the address of head node
 * @index: Index of node
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	prev = *head;
	while (prev != NULL && i < index)
	{
		prev = prev->next;
		i++;
	}
	if (prev == NULL)
	{
		return (-1);
	}
	if (prev->next == NULL)
	{
		free(prev);
		return (1);
	}
	tmp = prev->next;
	prev->next = tmp->next;
	free(tmp);
	return (1);
}
