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
int num = 0;
int ct;
if (argc != 2)
{
printf("Error\n");
return (1);
}
ct = atoi(argv[1]);
if (ct < 0)
printf("%d\n", 0);
while (ct > 0)
{
if (ct >= 25)
ct = ct - 25;
else if (ct >= 10)
ct = ct - 10;
else if (ct >= 5)
ct = ct - 5;
else if (ct >= 2)
ct = ct - 2;
else if (ct >= 1)
ct = ct - 1;
num++;
}
printf("%d\n", num);
return (0);
}
