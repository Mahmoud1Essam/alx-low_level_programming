#include "main.h"
/**
*_print_rev_recursion - takes s as input
*@s: char pointer function input
*Return : void
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
