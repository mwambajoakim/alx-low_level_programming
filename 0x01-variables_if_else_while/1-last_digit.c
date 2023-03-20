#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**main - entry point
 *
 *return: 0 is success
 *
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if ((n%15) > 5)
{
  printf("Last digit of %d is %d and is greater than 5\n", n, n%15);
}
else if((n%15) = 0)
{
  printf("Last digit of %d is %d and is 0\n", n, n%15);
}
else if((n%15 < 6) && (n%15 != 0))
{
  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n%15);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, n%15);
return (0);
}
