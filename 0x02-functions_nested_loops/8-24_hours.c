#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * hour and min show the time from 00:00 to 23:59 then the time resets:
 */

void jack_bauer(void)

{
int min, hour;

for (hour = 0; hour < 24; hour++)
{
for (min = 0; min < 60; min++)
{
if ((hour <= 23) && (min <= 59))
{
_putchar(hour / 10 + '0');
_putchar(hour % 10 + '0');
_putchar(':');
_putchar(min / 10  + '0');
_putchar(min % 10 + '0');
_putchar('\n');
}
}
}
}
