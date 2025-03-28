# <ins>Command Line Arguments</ins>

## Introduction
Command line arguments are important. They help a programmer send commands to a particular program.

Say the program `GCC` whenever it is invoked to compile a program we usually supply it with commands or arguments. For example, `gcc prog.c -o prog`. In this example, gcc is the program and the others are commands supplied to it.

We can do all this by inserting the arguments `argc` and `argv` into our `main` function. `Argc` is the number of arguments that are passed to `main` and `argv` is the argument vector. `Argv` is a pointer to ana array of characters.

In this project I take a deep dive into these command line arguments.

## 00 - This program prints its name, followed by a new line.

- If you rename the program, it will print the new name, without having to compile it again
- The path has not been removed before the name of the program

## 01 - This program prints the number of arguments passed into it.
- The program prints a number, followed by a new line

## 02 - This program prints all arguments it receives.
- All arguments are printed, including the first one
- It only prints one argument per line, ending with a new line

## 03 - This program multiplies two numbers.
- The program prints the result of the multiplication, followed by a new line
- The assumption made is that the two numbers and result of the multiplication can be stored in an integer
- If the program does not receive two arguments, it prints `Error`, followed by a new line, and return `1`

## 04 - This program adds positive numbers.
- Prints the result, followed by a new line
- If no number is passed to the program, it prints `0`, followed by a new line
- If one of the number contains symbols that are not digits, it prints `Error`, followed by a new line, and return `1`
- The assumption made is that numbers and the addition of all the numbers can be stored in an `int`