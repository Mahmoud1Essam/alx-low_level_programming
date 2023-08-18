#include "main.h"
/**
*print_line - int n as input
*@n : input function
*Return: 0
*/
void print_line(int n)
{
int x;
for (x = 1; x <= n; x++)
_putchar('_');
_putchar('\n');
if (n <= 0)
_putchar('\n');
}
