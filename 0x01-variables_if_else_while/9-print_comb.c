#include <stdio.h>
/**
*main - void
*Return: Always 0 (Success)
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num);

putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
