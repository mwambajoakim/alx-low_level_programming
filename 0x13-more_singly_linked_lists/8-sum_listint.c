#include "lists.h"

/**
 * sum_listint - Sums the data in a list
 * @head: Pointer to head node
 *
 * Return: Sum of the data in the nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
