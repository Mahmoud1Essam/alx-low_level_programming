#include "main.h"
/**
*_strlen - takes s as input
*@s: int function input
*Return: count
*/
int _strlen(char *s)
{
int count;
for (count = 0; *s <= '\0'; s++)
count++;
return (count);
}
