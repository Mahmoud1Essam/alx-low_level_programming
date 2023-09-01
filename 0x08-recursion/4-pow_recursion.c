#include "main.h"
/**
*_pow_recursion - takes n as input
*@x: int function input
*@y: int function input
*Return: int
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
else
return (x * _pow_recursion(x, y - 1));
}
