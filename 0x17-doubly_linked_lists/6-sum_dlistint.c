#include "lists.h"

/**
 * sum_dlistint - Sums the elements of a node
 * @head: Pointer to head node
 *
 * Return: Sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
