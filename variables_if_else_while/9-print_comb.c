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
int nb1, nb2;
for (nb1 = 0 ; nb1 <= 9 ; nb1++)
{
for (nb2 = 0 ; nb2 <= 9 ; nb2++)
{
putchar(nb1 + nb2);
}
putchar(',');
}
return (0);
}
