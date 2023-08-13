#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main:  entry point
*description: sees if the number is positive or negative or zero
*Return: always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	printf("%i is negative", n);
	else if (n > 0)
	printf("%i is positive", n);
	else
	printf("%i is zero", n);

	return (0);
}
