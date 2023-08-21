#include "main.h"
/**
*_puts - takes str as input
*@str: int function input
*Return : void
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
