#include "main.h"
/**
*rev_string - takes s as input
*@s:  function input
*Return : void
*/
void rev_string(char *s)
{
int r = 0;
while (s[r])
{
_putchar(s[r]);
r++;
}
_putchar('\n');
while (r--)
{
_putchar(s[r]);
}
_putchar('\n');
}
