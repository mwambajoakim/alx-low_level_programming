#include "lists.h"

/**
 * add_nodeint - Add node to beginning of list
 * @head: Pointer to head
 * @n: Node element
 *
 * Return: Node at beginning
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
