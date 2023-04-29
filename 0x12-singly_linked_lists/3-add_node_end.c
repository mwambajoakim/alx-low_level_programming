#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds new node at the end of a list
 * @str: string to be pointed to
 * @head: pointer to the address copied
 * Return: address of new element or Null if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *newnode, *traverse;

	newnode = malloc(sizeof(list_t));

	for (; str[len]; len++)
		;

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = newnode;
	}
	return (*head);
}
