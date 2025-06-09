# <ins> Doubly_Linked Lists</ins>

## Introduction
Doubly linked lists are similar to singly linked lists except for one thing. Each node has two pointers to a previous node and a next node.

The head node's pointer to previous points to NULL just like the tail's pointer to next.

## 00 - This function prints all the elements of a dlistint_t list.
- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes

## 01 - This function returns the number of elements in a linked dlistint_t list.
- Prototype: `size_t dlistint_len(const dlistint_t *h);`

## 02 - This function adds a new node at the beginning of a dlistint_t list.
- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

## 03 - This function adds a new node at the end of a dlistint_t list.
- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

## 04 - This function frees a dlistint_t list.
- Prototype: `void free_dlistint(dlistint_t *head);`

## 05 - This function returns the nth node of a dlistint_t linked list.
- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- where `index` is the index of the node, starting from `0`
- if the node does not exist, return `NULL`

## 06 - This function returns the sum of all the data (n) of a dlistint_t linked list.
- Prototype: `int sum_dlistint(dlistint_t *head);`
- if the list is empty, return `0`