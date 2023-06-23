#include"main.h"
/**
*times_table - is function that print the 9 times table 
*Return: nothing
**/
void times_table(void)
{
int i, j, k, l, x;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
x = i * j;
if (x > 9)
{
k = x % 10;
l = (x - k) / 10;
_putchar(',');
_putchar(' ');
_putchar(l + '0');
_putchar(k + '0');
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(x + '0');
}
}
_putchar('\n');
}
}
