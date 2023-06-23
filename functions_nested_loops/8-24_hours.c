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
_putchar(('0' + (i / 10)) / 10);
_putchar(('0' + (i / 10)) % 10);
_putchar (':');
_putchar(('0' + (j % 10)) / 10);
_putchar(('0' + (j % 10)) % 10);
_putchar('\n');
}
}
}
