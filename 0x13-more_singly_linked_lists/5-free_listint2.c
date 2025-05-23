#include "lists.h"

/**
 * free_listint2 - Frees list, sets head to NULL
 * @head: Pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
