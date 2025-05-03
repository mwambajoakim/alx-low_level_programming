#include "lists.h"

/**
 * print_list - Prints the elements of list_t.
 * @h: Pointer to struct.
 *
 * Return: Elements of list.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	unsigned int i, count = 0;

	while (temp != NULL)
	{
		if (str == NULL)
			printf("[0](nil)\n");
		else
		{
			for (i = 0; temp->str[i] != '\0'; i++)
			;
			printf("[%d] %s", temp->len, temp->str);
		}
		count++;
		temp = temp->next;
	}
	return (count);
}
