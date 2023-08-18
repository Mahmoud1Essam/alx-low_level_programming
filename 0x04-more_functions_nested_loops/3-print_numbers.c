#include "main.h"
/**
*print_numbers - void
*Return: 0 or 1
*/
void print_numbers(void)
{
int c = 0;
do {
_putchar(num + 48);
c++;
} while (c >= 0 && c <= 9);
_putchar('\n');
}
