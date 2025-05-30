#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /*MAIN_H*/
