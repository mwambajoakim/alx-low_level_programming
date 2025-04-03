# <ins>Preprocessor Directives</ins>

## Introduction
A dive into the macros and headers that are used in C. The #include directive especially used at the top of source code is used to prevent multiple definitions.

Some common directives used include:
- #include
- #ifndef
- #define
- #endif
- #elif
- #if

## 00 - This header file defines a macro named SIZE as an abbreviation for the token 1024
- `#define BUFFSIZE 1024`

## 01 - This header file defines a macro named PI as an abbreviation for the token 3.14159265359
- `#define PI`

## 02 - This program prints the name of the file it was compiled from, followed by a new line.
- The standard library is used

## 03 - This function-like macro ABS(x)  computes the absolute value of a number x
- `#define ABS(x)`
