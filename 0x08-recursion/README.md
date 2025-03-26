# <ins>Recursion</ins>

## Introduction
From running loops and conditions in loops to pointing at memory addresses, this project entails recursion.

Recursion just means a function calling itself inside the function and performing whatever routine it does. For example to implement the factrial function, I would write it this way:

```
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

```

In the above code, the compiler checks if the number is equal to either `0` or `1`. If it is, it returns `1`. If not, it goes into the second `return` and does the math, making the function call itself.

## 00 - This function prints a string, followed by a new line.
- Prototype: `void _puts_recursion(char *s);`
- Works just like the standard library `puts` function

## 01 - This function prints a string in reverse.
- Prototype: `void _print_rev_recursion(char *s);`

## 02 - This function returns the length of a string.
- Prototype: `int _strlen_recursion(char *s);`
- Works just like the standard library `strlen` function