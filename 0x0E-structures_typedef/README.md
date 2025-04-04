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