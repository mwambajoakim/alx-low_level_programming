#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src, unsigned int n);
int _strlen(char *str);
void *_memset(char *ptr, int c, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif /*MAIN_H*/
