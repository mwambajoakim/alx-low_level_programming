# <ins>Dynamic Memory Allocation</ins>

## Introduction and Description
For the past projects, the compiler has been allocating memory to the arrays, strings and variables that I have been declaring. What if at some point I need to ask a user for their name and do not necessarily know the length and how much memory I need to allocate to it? That is where dynamic memory allocation comes in.

`Malloc()` is a pointer that is used to store memory dynamically. Its prototype is `void *malloc(size_t size);` It is a pointer to void meaning it can be used to allocate memeory to whichever data type. `size_t` is the size of the datat type and `size` is the number of characters that are going to be stored in memory.

After this memory allocation, one needs to free the memory area so that other programs can use it. That is where `void *free()` comes in. It frees the memory area pointed to by `malloc` and returns it to the heap.

In this project I will explore the fundamentals of dynamic memory allocation using `malloc()` and freeing the memory area using `free()`

## 00 - This function creates an array of chars, and initializes it with a specific char.
- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size` = `0`
- Returns a pointer to the array, or `NULL` if it fails

## 01 - This function returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- Prototype: `char *_strdup(char *str);`
- The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with malloc, and can be freed with `free`.
- Returns `NULL` if `str = NULL`
- On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

## 02 - This function concatenates two strings.
- Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
- If `NULL` is passed, treat it as an empty string.
- The function should return `NULL` on failure.

## 03 - This function returns a pointer to a 2 dimensional array of integers.
- Prototype: `int **alloc_grid(int width, int height);`
- Each element of the grid is initialized to `0`
- The function returns `NULL` on failure
- If `width` or `height` is `0` or `negative`, returns `NULL`