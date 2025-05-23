#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
