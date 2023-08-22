#include "main.h"
/**
*rev_string - takes s as input
*@s:  function input
*Return : void
*/
void rev_string(char *s)
{
int x, y;
char t;
for (x = 0; s[x] != '\0'; ++x)
;
for (y = 0; y < x / 2; y++)
{
t = s[y];
s[y] = s[x - 1 - y];
s[x - 1 - y] = t;
}
}
