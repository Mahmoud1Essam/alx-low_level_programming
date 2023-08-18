#include "main.h"
/**
*more_numbers - void
*Return: 0
*/
void more_numbers(void)
{
int n, r;
for (r = 0; r <= 9; r++)
{
for (n = 0; n <= 14; n++)
if (n > 9)
{
_putchar(n / 10 + '0');
}
_putchar(n % 10 + '0');
}
_putchar('\n');
}

}
