# <ins> Singly-Linked Lists</ins>

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

## 00 - This function prints all the elements of a list_t list.
- Prototype: `size_t print_list(const list_t *h);`
- Return: the number of nodes
- If `str` is NULL, print `[0] (nil)`
- Used `printf`

## 01 - This function returns the number of elements in a linked list_t list.
- Prototype: `size_t list_len(const list_t *h);`

## 02 - This function adds a new node at the beginning of a list_t list.
- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Returns: the address of the new element, or `NULL` if it failes
- `str` duplicated using `strdup`

## 03 - This function adds a new node at the end of a list_t list.
- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Returns: the address of the new element, or `NULL` if it failed
- `str` was duplicated using `strdup`

## 04 - This function frees a list_t list.
`Prototype: void free_list(list_t *head);`

## 05 - This function prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the main function is executed.
- Used the printf function

## 06 - This is a 64-bit program in assembly that prints `Hello, ALX`, followed by a new line.
- Used the printf function
- No use of interrupts
- Compiled using `nasm` and `gcc:`