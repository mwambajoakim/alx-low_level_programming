# <ins> ingly-Linked Lists</ins>

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