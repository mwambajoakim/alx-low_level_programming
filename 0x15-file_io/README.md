# <ins>File I/0</ins>

## Introduction
File handling helps a programmer access data whether ***text*** or ***binary*** and manipulate it as desired. In C there exists file descriptors that are standard. These include: `stdin`, `stdout`, and `stderr`. These are used in accessing data and are important in programming.

In accessing a file, a programmer has to use a `FILE` pointer which accesses the file through its address. The operations done to a file include:
- Declare pointer to file
- Open the file using `fopen()`
- Read, write or append data
- Close the file using `fclose()`