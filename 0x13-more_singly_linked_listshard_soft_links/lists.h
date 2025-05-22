#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - Singly linked list
 * @n: Integer
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t

int _putchar(char);

#endif /*LISTS_H*/
