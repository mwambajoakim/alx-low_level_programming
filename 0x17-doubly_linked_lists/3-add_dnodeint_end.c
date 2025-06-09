#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to end of a list
 * @head: Pointer to the head node
 * @n: Integer to add to the new node
 *
 * Return: Pointer to the node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end_node;
	end_node->prev = temp;
	return (end_node);
}
