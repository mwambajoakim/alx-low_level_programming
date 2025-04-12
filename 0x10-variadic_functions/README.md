# <ins>Variadic Functions</ins>

## Introduction
In C there exists function that can take a variable number of parameters. These are called **variadic functions**. They have macros that help in accessing the arguments, which by the way are not known until compile time. These macros include: 
- `va_start` - Initializes the first argument.
- `va_list` - Pointer to the list of arguments initialized by `va_start`.
- `va_arg` - Returns the pointer of the next argument.
- `va_end` - Frees `va_list`.

## 00 - Write a function that returns the sum of all its parameters.
- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return `0`
