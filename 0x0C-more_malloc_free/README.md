# <ins>More Malloc and Free</ins>

## Introduction
In this project I dive into the `malloc()` function and also into its relatives, i.e `realloc()` and `calloc()`. omething new I have learnt so far is that it is not a good idea to cast the results of `malloc`. It can mask sme bugs and also it's because in C, void pointers are implicitly cast. For example;
```
int *users = malloc(length * sizeof *users);
```
In this example, the results of malloca are implicitly cast to an integer type.

## 00 - This function allocates memory using malloc.
- Prototype: `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory
- if `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98`