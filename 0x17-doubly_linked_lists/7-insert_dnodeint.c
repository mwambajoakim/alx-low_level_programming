#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at index idx
 * @h: Pointer to head node
 * @idx: Index at which to insert
 * @n: Integer to add to node
 *
 * Return: Pointer to the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = dlist_len(*h), i = 1;
	dlistint_t *new_node, *temp, *prev_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	if (idx > count)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	while (temp != NULL && i < idx - 1)
	{
		prev_node = temp;
		++i;
		temp = temp->next;
	}
	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}
	prev_node->next = new_node;
	new_node->prev = prev_node;
	new_node->next = temp;
	return (new_node);
}
