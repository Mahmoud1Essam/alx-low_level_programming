#include "main.h"
/**
*string_nconcat - takes 3 values
*@s1: char pointer  input
*@s2: char input
*@n: int input
*Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
chr *st
unsigned int x, y, s1_len, s2_len;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s1 = "";
for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
;
for (s2_len = 0; s1[s2_len] != '\0'; s2_len++)
;
st = malloc(s1_len + n + 1);
if (st == NULL)
{
return (NULL);
}
for (x = 0; S1[x] != '\0'; x++)
st[x] = s1[x];
for (y = 0; y < n; y++)
{
st[x] = s2[y];
x++;
}
st[x] = '\0';
return (st);
}
