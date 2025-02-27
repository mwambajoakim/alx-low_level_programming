# <ins>More Functions and Nested Loops</ins>

## Introduction

This is just a continuation of the last project on loops and functions. Here it gets more advanced but borrows a lot from the skills learnt in the previous project.

## 00 - This function checks for uppercase character.
- Prototype: `int _isupper(int c);`
- Returns `1` if `c` is uppercase.
- Returns `0` otherwise.

## 01 - This function checks for a digit (`0` through `9`).
- Prototype: `int _isdigit(int c);`
- Returns `1` if `c` is a digit.
- Returns `0` otherwise.

## 02 - This function multiplies two integers.
- Prototype: `int mul(int a, int b);`
- Returns the result of mutiplication.

## 03 - This function prints the numbers, from `0` to `9`, followed by a new line.
- Prototype: `void print_numbers(void);`
- Used	_putchar	 twice in the code.

## 04 - This function prints the numbers, from `0` to `9`, followed by a new line.
- Prototype: `void print_most_numbers(void);`
- Does not print `2` and `4`.
- Used `_putchar` twice in the code.

## 05 - This function prints 10 times the numbers, from `0` to `14`, followed by a new line.
- Prototype: `void more_numbers(void);`
- Used `_putchar` three times in the code.

## 06 - This function draws a straight line in the terminal.
- Prototype: `void print_line(int n);`
- Used `_putchar` function to print.
- Where `n` is the number of times the character `_` should be printed.
- The line should end with a `\n`.
- If `n` is `0` or less, the function only prints `\n`.

## 07 - This function draws a diagonal line on the terminal.
- Prototype: `void print_diagonal(int n);`
- Used `_putchar` function to print.
- Where `n` is the number of times the character `\` should be printed.
- The diagonal ends with a `\n`.
- If `n` is `0` or less, the function only prints a `\n`.

## 08 - This function prints a square, followed by a new line.
- Prototype: `void print_square(int size);`
- Used `_putchar` function to print.
- Where `size` is the size of the square.
- If `size` is `0` or less, the function should print only a new line.
- Used the character `#` to print the square.

## 09 - The FizzBuzz Test
- The program prints the numbers from `1` to `100`, followed by a new line. But for multiples of three it prints `Fizz` instead of the number and for the multiples of five it prints `Buzz`. For numbers which are multiples of both three and five it prints `FizzBuzz`.

- Each number or word is separated by a space.

