# <ins>Functions and Nested Loops

## Introduction
- In this project I explore the use of functions in C;
	- Declaring functions
	- Naming functions
	- Having a return type for the functions
	- Declaring formal parameters used in the functions if any

- I will also look at nested loops especially `for` and `while ` loops.

## 00 - _putchar
- This program prints _putchar and a new line.

## 01 - This function prints the alphabet, in lowercase, followed by a new line.
- Prototype: `void print_alphabet(void);`
- `_putchar` was used twice in the code.

## 02 - fThis function prints 10 times the alphabet, in lowercase, followed by a new line.
- Prototype: `void print_alphabet_x10(void);`
- `_putchar` was used twice in the code.

## 03 - This function checks for lowercase character.
- Prototype: `int _islower(int c);`
- Returns `1` if `c` is lowercase.
- Returns `0` otherwise.

## 04 - This function checks for alphabetic character.
- Prototype: `int _isalpha(int c);`
- Returns `1` if `c` is a letter, lowercase or uppercase.
- Returns `0` otherwise.

## 05 - This function prints the sign of a number.
- Prototype: `int print_sign(int n);`
- Returns `1` and prints `+` if `n` is greater than zero.
- Returns `0` and prints `0` if `n` is zero.
- Returns `-1` and prints `-` if `n` is less than zero.

## 06- This function computes the absolute value of an integer.
- Prototype: `int _abs(int);`
- Returns the absolute value of the number.

## 07 - This function prints the last digit of a number.
- Prototype: `int print_last_digit(int);`
- Returns the value of the last digit.

## 08 - This function prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
- Prototype: `void jack_bauer(void);`