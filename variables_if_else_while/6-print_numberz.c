#include <stdio.h>
/**
*main - Entry point of the program
*
*
*The function print all the single digit numbers of base 10
*
*
*Return: Always 0 (indicating success)
*/
int main(void)
{
int nb;
for (nb = 0; nb <= 9; nb++)
{
putchar('0' + nb);
}
putchar('\n');
return (0);
}
