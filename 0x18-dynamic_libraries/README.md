# <ins>Dynamic Libraries</ins>

## Introduction
Dynamically linked libraries are libraries whose source code is accessed throught the address of that source code. They have an advantage over the statically linked libraries because they take up less space.

To create a dynamic library using gcc, 
```
gcc *.c -c - fPIC
```
The `-fPIC` flag ensures that the code is position-independent.
After that, to create  the library, the following command is typed:
```
gcc *.o -shared -o libmy_lib.so
```
The wildcard * tells the compiler to compile all the .o files into a dynamic library which is specified by the -shared flag. The naming convention for dynamic libraries is such that each shared library name must start with lib and end with .so . Other than that though, let your imagination run free when considering names for your dynamic libraries.

Finally, we’ll need to export the path for libraries so that programs know where to look for them by executing the following command: `export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH`

