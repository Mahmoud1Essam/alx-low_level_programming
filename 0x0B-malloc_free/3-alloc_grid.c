#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - takes 2 input
*@width:  function input
*@height:  function input
*Return: array , null on faluire
*/
int **alloc_grid(int width, int height)
{
int **t, x, y;
t = malloc(sizeof(*t) * height);
if (width <= 0 || height <= 0 || t == 0)
{
return (NULL);
}
else
{
for (x = 0; x < height; x++)
{
t[x] = malloc(sizeof(**t) * width);
if (t[x] == 0)
{
while (x--)
free(t[x]);
free(t);
return (NULL);
}
for (y = 0; y < width; y++)
t[x][y] = 0;
}
}
return (t);
}
