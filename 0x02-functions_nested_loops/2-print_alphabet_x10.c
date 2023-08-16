#include "main.h"
/**
*print_alphabet_x10 - void
*/
void print_alphabet_x10(void)
{
int alpha, line;
for (line = 0; line <= 9; line++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('n');
}
}
