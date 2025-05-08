#include "lists.h"

/**
 * _strlen - Counts the characters in a string.
 * @str: Pointer to string.
 *
 * Return: Number of characters.
 */
unsigned int _strlen(char *str);
{
	
}

/**
 * add_node - Creates node at the beggining of list.
 * @head: Point to head node.
 * @str: Pointer to string data in node.
 *
 * Return: Pointer to a node.
 */
list_t *add_node(list_t **head, const char *str)
{
	const list_t *new_node;
	const char *ptr;
	unsigned int length;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	ptr = strdup(str);
	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	length = strlen(ptr);
	new_node->str = ptr
	new_node->len = length
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
