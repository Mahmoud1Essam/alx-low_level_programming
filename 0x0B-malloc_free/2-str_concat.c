#include "main.h"
#include <stdlib.h>
/**
*str_concat - takes 2 input
*@s1: char  function input
*@s2:  function input
*Return: newly allocated space in memory, NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
int s1_l = 0;
int s2_l = 0;
int x;
char *o;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (x = 0; s1[x] != '\0'; x++)
s1_l++;
for (x = 0; s2[x] != '\0'; x++)
s2_l++;
o = malloc(sizeof(char) * (s1_l + s2_l)+1);
if (o == NULL)
return (NULL);
for (x = 0; s1[x] != '\0'; x++)
o[x] = s1[x];
for (x = 0; s2[x] != '\0'; x++)
o[s1_l + 1] = s2[x];
return (o);
}
