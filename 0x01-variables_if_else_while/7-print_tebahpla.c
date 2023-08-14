#include <stdio.h>
/**
*main - void
*Return: Always 0 (Success)
*/
int main(void)
{
char lower_reverse;
for (lower_reverse = 'z'; lower_reverse >= 'a'; lower_reverse--)
putchar(lower_reverse);
putchar('\n');
return (0);
}
