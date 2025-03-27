# <ins>Static Libraries</ins>

## Introduction
In this project I go into the making of a static library. tatic libraries help to consolidate the programs one has written into one place and ready to be used as one program.

The command used for creating them is `ar` which means archiver. It is also good to run it with the `-rc` flags. The `r` flag tells the compiler to replace older objects in the library and `c` tells it to create a new library if it does not exist.

## 00 - Created a static library
- I made object files from all the C files in the directory
- Created a library called `libmy.a` using the command `ar rc libmy.a *.o`

## 01 - Created a shell script
- I created a shell script that creates a library `liball.a` from all the `.c` files