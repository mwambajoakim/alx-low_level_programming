#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node in a given index
 * @head: Pointer to the address of head node
 * @idx: Index of node
 * @n: Integer
 *
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *prev;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp != NULL && i < idx)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}
	prev->next = new_node;
	new_node->next = tmp;
	return (new_node);
}
