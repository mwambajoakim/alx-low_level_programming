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

## 00 - Created the dynamic library libdynamic.so containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```