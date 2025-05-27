# <ins>Bit Manipulation</ins>

## Introduction
Bit manipulation is important in many parts of programming. It helps for example to control how a program uses memory in a particular computer. In computer science, bits are an important concept to know and more so the ability to manipulate them. Binary numbers are also important to know since in computing, everything is executed through 0s and 1s. 

For example, the number 5 is stored as 101 in binary. The operations used in manipulating bits include:
1. Bitwise AND - ``&`
2. Bitwise OR - `|`
3. Bitwise XOR - `^`
4. Leftshift - `<<`
5. Rightshift - `>>`
6. Bitwise complement - `~`

An Example using bitwise XOR
----------------------------
Considering two variables `x = 10` and `y = 12` The out put of `x ^ y` will be


|  `X`  |  `Y ` | `XOR/ ^`|
| --- | --- |  ---  |
|  1  |  1  |   0   |
|  0  |  1  |   1   |
|  1  |  0  |   1   |
|  0  |  0  |   0   |

## 00 - This function converts a binary number to an unsigned int.
- Prototype: `unsigned int binary_to_uint(const char *b);`
- where `b` is pointing to a string of `0` and `1` chars
- Return: the converted number, or `0` if:
	- there is one or more chars in the string `b` that is not `0` or `1`
	- `b` is `NULL`