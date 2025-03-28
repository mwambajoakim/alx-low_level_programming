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