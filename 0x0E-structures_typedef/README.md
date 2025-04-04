# <ins>Structs and Typedef</ins>

## Introduction
Structs are user-defined data types that help handle different datatypes all at once. This means that in a struct, one can declare a `char`, an `int`, a `long int` and  so on. 

Typedef on the other hand help a programmer make synonyms of datatypes and in turn enhances portability of the code. For example:
```
typedef long int l_int;
```
In this case `l_int` can be used to declare variables with a `long int` datatype.
```
l_int number = 500;
```

## 00 - Defines a new type struct dog with the following elements:
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

## 01 - This function initializes a variable of type struct dog
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

## 02 - This function prints a struct dog
- Prototype: `void print_dog(struct dog *d);`
- Used the standard library
- If an element of `d` is `NULL`, prints `(nil)` instead of this element. (if `name` is `NULL`, prints `Name: (nil)`)
- If `d` is `NULL` print nothing.
