#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - void
*Return: 0
*/
int main(void)
{
  int x;
  char y;
  srand(time(NULL));
  while (x <= 2645)
    {
      y = rand() % 128;
      x += y;
      putchar(y);
    }
  putchat(2772 - x);
  return (0);
}
