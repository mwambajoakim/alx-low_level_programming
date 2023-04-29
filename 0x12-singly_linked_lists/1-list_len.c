#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: name of the list
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	int counter = 0; /*variable to iterate in the list if elements*/

	while (h)
	{
		counter++; /*incrementing to iterate throught the whole list*/
		h = h->next; / /*assigning list to the next node*/
	}
	return (counter);
}
