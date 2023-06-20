#include<stdio.h>
/**
*main - Entry point of the program
*
*
*
*The program print all the numbers of base 16 in lowercase
*
*
*
*Return: Always 0 (indicating success)
*/
int main(void)
{
int nb;
for (nb = 0; nb < 16 ; nb++)
{
if (nb < 10)
{
putchar('0' + nb);
}
else
{
putchar('a' + nb - 10);
}
}
putchar('\n');
return (0);
}
