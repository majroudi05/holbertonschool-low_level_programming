#include<stdio.h>
/**
*main - Entry to the program
*The program prints all possible combinations of two digit numbers
*Return:always 0 (indication of succes)
**/
int main(void)
{
int nb1, nb2, nb3;
for (nb1 = 0; nb1 <= 9; nb1++)
{
for (nb2 = nb1 + 1; nb2 <= 9; nb2++)
{
for (nb3 = nb2 + 1; nb3 <= 9; nb3++)
{
putchar('0' + nb1);
putchar('0' + nb2);
putchar('0' + nb3);
if (nb1 < 7)
{
putchar (',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
