#include <stdio.h>
#include <stdlib.h>
/**
*main - takes 2 argument
*@argc: int input
*@argv: char array input
*Return: 0
*/
int main(int argc, char *argv[])
{
char *a
int add = 0;
while (--argc)
{
for (a = argv[argc]; *a; a++)
if (*a < '0' || *a > '9')
return (printf("Error\n"), 1);
add += (atoi(argv[argc];
}
printf("%d\n", add);
return (0);
}
