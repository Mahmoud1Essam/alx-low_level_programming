#include <stdio.h>
/**
*main - takes 2 argument
*@argc: int input
*@argv: char array input
*Return: 0
*/
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);
return (0);
}
