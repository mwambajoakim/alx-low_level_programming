# <ins>Pointers, Arrays and Strings</ins>

## Introduction
Here lies the deep waters of C. It is a journey I enjoy taking. In this project, I will be looking at pointers basics, arrays and strings which are character arrays.

## 00 - This function takes a pointer to an int as parameter and updates the value it points to to 98.
- Prototype: `void reset_to_98(int *n);`

## 01 -  This function swaps the values of two integers.
- Prototype: `void swap_int(int *a, int *b);`

## 02 - This function returns the length of a string.
- Prototype: `int _strlen(char *s);
- This function works just like the `strlen` function in the `strings.h` library.

## 03 - This function prints a string, followed by a new line, to stdout.
- Prototype: `void _puts(char *str);`
- Works just like the `puts` function in the standard libary.

## 04 - This function prints a string, in reverse, followed by a new line.
- Prototype: `void print_rev(char *s);`

## 05 - This function reverses a string.
- Prototype: `void rev_string(char *s);`

## 06 - This function prints every other character of a string, starting with the first character, followed by a new line.
- Prototype: `void puts2(char *str);`

## 07 - This function prints half of a string, followed by a new line.
- Prototype: `void puts_half(char *str);`
- The function prints the second half of the string.
- If the number of characters is odd, the function prints the last `n` characters of the string, where `n  = (length_of_the_string - 1) / 2`

## 08 - This function prints n elements of an array of integers, followed by a new line.
- Prototype: `void print_array(int *a, int n);`
- Where `n` is the number of elements of the array to be printed.
- Numbers are separated by comma, followed by a space.
- The numbers are displayed in the same order as they are stored in the array.
- Used `printf` in this project.

