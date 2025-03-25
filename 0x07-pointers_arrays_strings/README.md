# <ins>Even More Pointers, Arrays and trings</ins>

## Introduction
This is a continuation of the previous two projects on pointers. Here I delve into double pointers and their uses. Also, I touch on multidimensional arrays.

## 00 - This function fills memory with a constant byte.
- Prototype: `char *_memset(char *s, char b, unsigned int n);`
- The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
- Returns a pointer to the memory area `s`

## 01 - This function copies memory area.
- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
- The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`
- Returns a pointer to `dest`