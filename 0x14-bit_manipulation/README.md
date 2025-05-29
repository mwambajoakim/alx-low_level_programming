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

## 01 - This function prints the binary representation of a number.
- Prototype: `void print_binary(unsigned long int n);`
- No use of arrays
- No use of `malloc`
- No use of the `%` or `/` operators

## 02 - This function returns the value of a bit at a given index.
- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to get
- Returns: the value of the bit at index `index` or `-1` if an error occured

## 03 - This function sets the value of a bit to 1 at a given index.
- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred

## 04 - This function sets the value of a bit to 0 at a given index.
- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred

## 05 - This function returns the number of bits you would need to flip to get from one number to another.
- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- No use of the `%` or `/` operators

## 06 - This function checks the endianness.
- Prototype: `int get_endianness(void);`
- Returns: `0` if big endian, `1` if little endian