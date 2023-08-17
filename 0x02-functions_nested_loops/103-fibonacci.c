#include <stdio.h>
#define N 50
/**
*main - void
*Return: Always 0 (Success)
*/
int main(void)
{
unsigned long fib[N];
int i;
fib[0] = 1;
fib[1] = 2;
printf("%lu, %lu", fib[0], fib[1]);
for (i = 2; i < N; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
printf(", %lu", fib[i]);
}
printf("\n");
return (0);
}
