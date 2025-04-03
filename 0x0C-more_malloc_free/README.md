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

## 01 - This function concatenates two strings.
- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- The returned pointer points to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
- If the function fails, it should return `NULL`
- If `n` is greater or equal to the length of `s2` it uses the entire string `s2`
- if `NULL` is passed, it is treated as an empty string