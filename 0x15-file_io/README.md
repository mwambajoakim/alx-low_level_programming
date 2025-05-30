# <ins>File I/0</ins>

## Introduction
File handling helps a programmer access data whether ***text*** or ***binary*** and manipulate it as desired. In C there exists file descriptors that are standard. These include: `stdin`, `stdout`, and `stderr`. These are used in accessing data and are important in programming.

In accessing a file, a programmer has to use a `FILE` pointer which accesses the file through its address. The operations done to a file include:
- Declare pointer to file
- Open the file using `fopen()`
- Read, write or append data
- Close the file using `fclose()`

## 00 - This function reads a text file and prints it to the POSIX standard output.
- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- where `letters` is the number of letters it should read and print
- returns the actual number of letters it could read and print
- if the file can not be opened or read, return `0`
- if filename is `NULL` return `0`
- if `write` fails or does not write the expected amount of bytes, return `0`