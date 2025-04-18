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

## 02 - This function locates a character in a string.
- Prototype: `char *_strchr(char *s, char c);`
- Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found

## 03 - This function gets the length of a prefix substring.
- Prototype: `unsigned int _strspn(char *s, char *accept);`
- Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`


## 04 - This function searches a string for any of a set of bytes.
- Prototype: `char *_strpbrk(char *s, char *accept);`
- The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
- Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found

## 05 - This function locates a substring.
- Prototype: `char *_strstr(char *haystack, char *needle);`
- The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes `(\0)` are not compared
- Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.

## 06 - This function prints the chessboard.
- Prototype: `void print_chessboard(char (*a)[8]);`
