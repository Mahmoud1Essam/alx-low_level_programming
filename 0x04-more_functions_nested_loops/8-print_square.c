#include "main.h"
/**
*print_square - int size as input
*@size: checks input function
*Return: 0
*/
void print_square(int size)
{
if (size <= 0)
_putchar('\n');
else
{
int x, y;
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
_putchar('#');
_putchar('\n');
}
}
}
