#include "lists.h"

/**
 * _strlen - Counts characters in a string
 * @str: Pointer to string.
 *
 * Return: Number of characters.
 */
unsigned int _strlen(char *str)
{
	unsigned int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - Adds a node to end of a list.
 * @head: Pointer to head node.
 * @str: Pointer to a string.
 *
 * Return: Pointer to the node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *ptr;
	unsigned int length;
	list_t *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULl);
	}
	ptr = strdup(str);
	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	length = _strlen(str);
	new_node->str = ptr;
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
