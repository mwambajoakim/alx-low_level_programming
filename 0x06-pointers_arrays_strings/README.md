# <ins>More Pointers</ins>

## Introduction
This is a continuation of the previous project on pointers. More depth and understanding of the concept using these projects. How to dereference pointer, use of arrays and strings as pointers and of course the previous concepts on conditionals, loops and functions in C.

## 00 - This function concatenates two strings.
- Prototype: char `*_strcat(char *dest, char *src);`
- This function appends the `src` string to the `dest` string, overwriting the terminating null byte `(\0)` at the end of `dest`, and then adds a terminating null byte.
- Returns a pointer to the resulting string `dest`.

## 01 - This function concatenates two strings.
- Prototype: `char *_strncat(char *dest, char *src, int n);`
- The `_strncat` function is similar to the `_strcat` function, except that
	- it will use at most `n` bytes from `src`; and
	- `src` does not need to be null-terminated if it contains `n` or more bytes.
- Return a pointer to the resulting string `dest`.

## 02 - This function copies a string.
- Prototype: `char *_strncpy(char *dest, char *src, int n);`
- This function works exactly like `strncpy`.

## 03 - This function compares two strings.
- Prototype: `int _strcmp(char *s1, char *s2);`
- This function work exactly like `strcmp`.

## 04 - This function reverses the content of an array of integers.
- Prototype: `void reverse_array(int *a, int n);`
- Where `n` is the number of elements of the array.
- _This one was ineresting especially the part where I swapped elements._

## 05 - This function changes all lowercase letters of a string to uppercase.
- Prototype: `char *string_toupper(char *);`

## 06 - This function capitalizes all words of a string.
- Prototype: `char *cap_string(char *);`
- Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`.

## 07 - This function encodes a string into 1337.
- Letters `a` and `A` should be replaced by `4`.
- Letters `e` and `E` should be replaced by `3`.
- Letters `o` and `O` should be replaced by `0`.
- Letters `t` and `T` should be replaced by `7`.
- Letters `l` and `L` should be replaced by `1`.
- Prototype: `char *leet(char *);`
- Used one `if` in the code.
- Used two loops in the code.

## 08 - This program prints a[2] = 98, followed by a new line.
-  Accessed `a[2]` through pointer arithmetic
- Only wrote one statement