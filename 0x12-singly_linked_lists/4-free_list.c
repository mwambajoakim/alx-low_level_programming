#include "lists.h"

/**
 * free_list - Frees a list
 * @head: Pointer to head of list
 */
void free_list(list_t *head)
{

	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next; /* Save next pointer before freeing */
		free(head->str);   /* Free the string if it exists */
		free(head);        /* Free the current node */
		heada = tmp;       /* Move to next node */
	}

}
