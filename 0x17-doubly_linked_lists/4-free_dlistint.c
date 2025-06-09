#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: Pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
