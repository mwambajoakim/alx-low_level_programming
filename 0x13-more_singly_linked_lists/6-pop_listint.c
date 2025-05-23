#include "lists.h"

/**
 * pop_listint - Deletes the hde of a list
 * @head: Pointer to address of head
 *
 * Return: Element in head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int receive;

	if (*head == NULL)
	{
		return (0);
	}

	receive = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (receive);
}
