#include "main.h"
/**
*print_line - int n as input
*@n : input function
*Return: 0
*/
void print_line(int n)
{
int x;
if (n <= 0)
_putchar('\n');
else
{
for (x = 1; x <= n; x++)
_putchar('_');
_putchar('\n');
}
}
