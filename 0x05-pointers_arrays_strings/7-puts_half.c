#include "main.h"
/**
*puts_half - takes str as input
*@str: int function input
*Return : void
*/
void puts_half(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++)
;
x++;
for (x /= 2; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
