#include "lists.h"

/**
 * add_nodeint_end - add node to list end
 * @head: Pointer to head node
 * @n: Element of a node
 *
 * Return: Pointer to node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *tmp;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return NULL;
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	tmp = *head;
	for (; tmp->next != NULL; tmp = tmp->next)
		;
	tmp->next = end_node;
	return (end_node);
}
