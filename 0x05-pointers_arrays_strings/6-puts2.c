#include "main.h"
/**
*puts2 - takes str as input
*@str: int function input
*Return : void
*/
void puts2(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++)
{
if (x % 2 == 0)
_putchar(str[x]);
}
_putchar('\n');
}
