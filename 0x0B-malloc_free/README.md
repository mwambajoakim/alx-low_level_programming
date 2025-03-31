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