#include "main.h"
/**
*_sqrt_recursion - takes n as input
*@n: int function input
*Return: int
*/
int _sqrt_recursion(int n)
{
static int i = 1;
if (n < 0)
return (-1);
if (x * x == n)
return (i);
if (x * x > n)
return (-1);
x++;
return (_sqrt_recursion(n));
}
