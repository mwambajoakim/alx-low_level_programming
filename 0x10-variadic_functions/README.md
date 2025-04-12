# <ins>Variadic Functions</ins>

## Introduction
In C there exists function that can take a variable number of parameters. These are called **variadic functions**. They have macros that help in accessing the arguments, which by the way are not known until compile time. These macros include: 
- `va_start` - Initializes the first argument.
- `va_list` - Pointer to the list of arguments initialized by `va_start`.
- `va_arg` - Returns the pointer of the next argument.
- `va_end` - Frees `va_list`.

## 00 - This function returns the sum of all its parameters.
- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, returns `0`

## 01 - This function prints numbers, followed by a new line.
- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- where `separator` is the string to be printed between numbers
- and `n` is the number of integers passed to the function
- If `separator` is `NULL`, it is not printed
- Prints a new line at the end of the function