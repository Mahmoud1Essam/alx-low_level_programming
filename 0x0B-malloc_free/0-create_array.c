#include "main.h"
#include <stdlib.h>
/**
*create_array - takes 2 argument
*@size: int input
*@c: char input
*Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *l = malloc(size);
if (size == 0 || l == 0)
return (0);
while (size--)
l[size] = c;
return (l);
}
