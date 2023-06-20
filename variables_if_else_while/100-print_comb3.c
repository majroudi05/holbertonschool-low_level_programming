#include<stdio.h>
/**
*main - Entry of the program
*
*The program prints all the possible different combinations of tow digits
*
*Return: always 0 (indication succes)
**/
int main(void)
{
int nb1, nb2;
for (nb1 = 0; nb1 <= 9; nb1++)
{
for (nb2 = 0; nb2 <= 9; nb2++)
{
putchar('0' + nb1);
putchar('0' + nb2 + 1);
putchar(','); 
}
}
return (0);
}
