# <ins> More Singly-Linked Lists</ins>

## Introduction

Data structures allow for one to arrange and manipulate data in programming. ome of the common data structures include:
- Arrays
- Linked Lists
- Graphs
- Trees
- Stacks
- Queues

Singly linked lists are linked lists that have `nodes` which have two features inside them. They have values thata carry the necessary data, and a pointer to the next node. They are specifically called linked lists because their last node points to `NULL` and each node points to the next one. A simple node could have the following structure:
```
typedef struct Node
{
	int data;
	struct Node *next;
} Node;
```
This can be called using ``` Node ``` since it has been `typedef`ed.

## 00 - This function prints all the elements of a listint_t list.
- Prototype: `size_t print_listint(const listint_t *h);`
- Return: the number of nodes
- No use of `printf`

## 01 - This function returns the number of elements in a linked listint_t list.
- Prototype: `size_t listint_len(const listint_t *h);`

## 02 - This function adds a new node at the beginning of a listint_t list.
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

## 03 - This function adds a new node at the end of a listint_t list.
- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

## 04 - This  function frees a listint_t list.
- Prototype: `void free_listint(listint_t *head);`

## 05 - This function frees a listint_t list.
- Prototype: `void free_listint2(listint_t **head);`
- The function sets the head to `NULL`

## 06 - This function deletes the head node of a listint_t linked list, and returns the head node’s data (n).
- Prototype: `int pop_listint(listint_t **head);`
- if the linked list is empty return `0`

## 07 - This function that returns the nth node of a listint_t linked list.
- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- where `index` is the index of the node, starting at 0
- if the node does not exist, return `NULL`

## 08 - This function returns the sum of all the data (n) of a listint_t linked list.
- Prototype: `int sum_listint(listint_t *head);`
- if the list is empty, return `0`

## 09 - This function inserts a new node at a given position.
- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- where `idx` is the index of the list where the new node should be added. Index starts at 0
- Returns: the address of the new node, or `NULL` if it failed
- if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
