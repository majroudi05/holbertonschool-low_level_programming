#include"main.h"
/**
 *print_number - print the number since 0 up to 9
 *Return: the numbers
 **/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
