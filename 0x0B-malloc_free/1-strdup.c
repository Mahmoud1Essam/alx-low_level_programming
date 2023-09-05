#include "main.h"
#include <stdlib.h>

#include "main.h"
/**
*_strdup - takes str as input
*@str:  function pointer input
*Return: pointer to duplicat string, NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
int x = 0, s = 0;
char *c;
if (str == NULL)
return (NULL);
for (; str[s] != '\0'; s++)
;
c = malloc(s * sizeof(*str) + 1);
if (c == 0)
return (NULL);
else
{
for (; x < s; x++)
c[x] = str[x];
}
return (c);
}
