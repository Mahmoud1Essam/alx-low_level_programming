#include "main.h"
#include <stdlib.h>
/**
*free_grid - takes 2 input
*@grid:  function input
*@height:  function input
*Return: void
*/
void free_grid(int **grid, int height)
{
int x = 0;
for (; x < height; x++)
free(grid[x]);
free(grid);
}
