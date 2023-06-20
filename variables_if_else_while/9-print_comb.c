#include<stdio.h>
/**
*main - Entry of the program
*
*The program print all possible combinations of single digit numbers
*
*Return: always 0 (indication of succes)
**/
int main(void)
{
int nb;
for (nb = 0 ; nb <= 9 ; nb++)
{
putchar('0' + nb);
if (nb < 9)
{
putchar(',');
putchar(' ');
}
}
putchar(' ');
return (0);
}
