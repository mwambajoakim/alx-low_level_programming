# <ins>Command Line Arguments</ins>

## Introduction
Command line arguments are important. They help a programmer send commands to a particular program.

Say the program `GCC` whenever it is invoked to compile a program we usually supply it with commands or arguments. For example, `gcc prog.c -o prog`. In this example, gcc is the program and the others are commands supplied to it.

We can do all this by inserting the arguments `argc` and `argv` into our `main` function. `Argc` is the number of arguments that are passed to `main` and `argv` is the argument vector. `Argv` is a pointer to ana array of characters.

In this project I take a deep dive into these command line arguments.