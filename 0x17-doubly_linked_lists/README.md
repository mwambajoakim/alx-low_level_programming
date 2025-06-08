# <ins> Doubly_Linked Lists</ins>

## Introduction
Doubly linked lists are similar to singly linked lists except for one thing. Each node has two pointers to a previous node and a next node.

The head node's pointer to previous points to NULL just like the tail's pointer to next.

## 00 - This function prints all the elements of a dlistint_t list.
- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes

## 01 - This function returns the number of elements in a linked dlistint_t list.
- Prototype: `size_t dlistint_len(const dlistint_t *h);`