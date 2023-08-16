#include "main.h"
/**
*times_table - void
*/
void times_table(void)
{
int i, result;
for (i = 0; i <= 9; i++)
{
result = i * 9;
if (result >= 10)
{
_putchar(result / 10 + '0');
result %= 10;
}
_putchar(result + '0');
_putchar('\n');
}
}
