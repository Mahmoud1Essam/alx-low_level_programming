#include <stdio.h>
/**
*main - void
*Return: Always 0 (Success)
*/
int main(void)
{
int n = 50;
unsigned long fib[n];
fib[0] = 1;
fib[1] = 2;
printf("%lu, %lu", fib[0], fib[1]);
for (int i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
printf(", %lu", fib[i]);
}
printf("\n");
return (0);
}
