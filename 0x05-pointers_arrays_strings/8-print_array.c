#include "main.h"
/**
*print_array - takes a n as input
*@a: int function input
*@n: int function input
*Return : void
*/
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
if (x != (n - 1))
printf("%d, ", a[x]);
else
printf("%d", a[x]);
}
printf("\n");
}
