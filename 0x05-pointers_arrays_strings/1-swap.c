#include "main.h"
/**
*swap_int - takes a b as input
*@a: int function input
*@b: int function input
*Return : void
*/
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
