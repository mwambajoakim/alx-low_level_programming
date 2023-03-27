#include  "main.h"
#include <string.h>

/**
 *_strlen - Function that returns the length of a string
 *
 *@s: string to be tested
 *
 *Return: 0 is success
 *
 */

int _strlen(char *s)
{
int len;
len = strlen(*s);
return(len);
}
