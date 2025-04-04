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

## 02 - This function allocates memory for an array, using malloc.
- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
- The `_calloc` function allocates memory for an array of `nmemb `elements of `size` bytes each and returns a pointer to the allocated memory.
- The memory is set to zero
- If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`
- If `malloc` fails, then `_calloc` returns `NULL`

## 03 - This function creates an array of integers.
- Prototype: `int *array_range(int min, int max);`
- The array created contains all the values from `min` (included) to `max` (included), ordered from `min` to `max`
- Return: the pointer to the newly created array
- If `min > max`, return `NULL`
- If `malloc` fails, return `NULL`