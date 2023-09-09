#include "main.h"
/**
*malloc_checked - takes 1 value
*@b: unsignes int
*Return: void
*/
void *malloc_checked(unsigned int b)
{
int *x = malloc(b);
if (x == 0)
exit(98);
return (x);
}
