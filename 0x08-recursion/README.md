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