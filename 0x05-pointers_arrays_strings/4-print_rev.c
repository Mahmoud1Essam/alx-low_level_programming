#include "main.h"
/**
*print_rev - takes s as input
*@s:  function input
*Return : void
*/
void print_rev(char *s)
{
int r = 0;
while (s[r])
r++;
while (r--)
{
_putchar(s[r]);
}
_putchar('\n');
}
