# <ins>Pointers to Functions</ins>

## Introduction
C has gotten more interesting as I move on to complex concepts. Pointers are a big thing indeed and in this project I use them to define functions that can point to other functions. It is mind-blowing but this makes it a really handy language. I can access things from a mile a way just using pointers, to put it in a metaphorical way.

Function pointers function just like normal pointer variables but they point to the address of another function. One can also have an array of function pointers that takes more then one function. The caveat is that all these functions need to be of the same type in everything, i.e their return type and the parameters they take.

## 00 - This function prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *));`

## 01 - This  function executes a function given as a parameter on each element of an array.
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
- Where `size` is the size of the array
- and `action` is a pointer to the function you needed

## 02 - This function searches for an integer.
- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
- where `size` is the number of elements in the array `array`
- `cmp` is a pointer to the function to be used to compare values
- `int_index` returns the index of the first element for which the `cmp` function does not return `0`
- If no element matches, returns `-1`
- If `size <= 0`, returns `-1`

## 03 - This  program performs simple operations.
- Usage: `calc` `num1` `operator` `num2`
- Assumption is that `num1` and `num2` are integers, so the `atoi ` function is useed to convert them from the string input to `int`
- Operator is one of the following:
	- `+`: addition
	- `-`: subtraction
	- `*`: multiplication
	- `/`: division
	- `%`: modulo
- The program prints the result of the operation, followed by a new line
- Assumption is that the result of all operations is stored in an `int`
- if the number of arguments is wrong, prints `Error`, followed by a new line, and exit with the status `98`
- if the operator is none of the above, print `Error`, followed by a new line, and exit with the status `99`
- if the user tries to divide `(/ or %)` by `0`, prints `Error`, followed by a new line, and exit with the status `100`
