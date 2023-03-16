#include <stdio.h>

int main(void)

{
  /*
   *main - entry point
   *
   *Return value 0: Success
   *
   */

  int a;
  char b;
  long int c;
  long long int d;
  float e;

printf("Size of an int is: %li byte(s)\n", sizeof(a));
printf("Size of a char is: %li byte(s)\n", sizeof(b));
printf("Size of a long int is: %li byte(s)\n" sizeof(c));
printf("Size of a long long int is: %li byte(s)\n", sizeof(d));
printf("Size of a float is: %li byte(s)\n", sizeof(e));
return (0);

}
