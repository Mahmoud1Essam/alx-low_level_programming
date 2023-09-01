#include "main.h"
/**
*_strlen_recursion - takes s as input
*@s: char pointer function input
*Return: int
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
}
