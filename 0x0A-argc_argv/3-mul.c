#include <stdio.h>
/**
*main - takes 2 argument
*@argc: int input
*@argv: char array input
*Return: 0
*/
int main(int argc, char *argv[])
{
int multi
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
multi = atoi(argv[1]) * atoi(argv[2])
printf("%d\n", multi);
}
return (0);
}
