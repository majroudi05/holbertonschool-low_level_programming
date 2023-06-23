#include"main.h"
/**
 *jack_bauer - a function that print every minute of the day
 *Return: nothing
 **/
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i <= 2; i++)
{
for (j = 0; i <= 9; j++)
{
if ((i <= 1 && j <= 9) || (i <= 2 && i <= 3))
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9 ; l++)
{
_putchar(i + 'O');
_putchar(j + '0');
_putchar(58);
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
}
}
