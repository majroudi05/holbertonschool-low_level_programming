#include"main.h"
/**
 *jack_bauer - a function that print every minute of the day
 *Return: nothing
 **/
void jack_bauer(void)
{
int i;
int j;
for (i = 0 ; i < 24 ; i++)
{
for (j = 0  ; i < 60 ; j++)
{
_putchar(i / 10 + '0');
_putchar (':');
_putchar(j % 10 + '0');
_putchar('\n');
}
}
}
