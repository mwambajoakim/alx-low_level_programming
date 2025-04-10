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