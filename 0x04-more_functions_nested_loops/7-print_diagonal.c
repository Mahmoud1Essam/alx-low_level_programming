#include "main.h"
/**
*print_diagonal - int n as input
*@n : checks input function
*Return: 0 or 1
*/
void print_diagonal(int n)
{
int x, y;
if (n <= 0)
_putchar('\n');
else
{
for (x = 0; x <= n; x++)
{
for (y = 0; y <= x; y++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
