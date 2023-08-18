#include "main.h"
/**
*more_numbers - void
*Return: 0
*/
void more_numbers(void)
{
int n, r, x;
for (r = 0; r <= 10; r++)
{
for (n = 0; n <= 14; n++)
x = n;
if (n > 9)
{
_putchar(1 + 48);
x = n % 10;
}
_putchar(n + 48);
}
_putchar('n');
}
