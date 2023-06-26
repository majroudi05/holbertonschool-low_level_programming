#include"main.h"
/**
 *print_line - function that draw a stright line
 *@n: the number of lines
 *Return: nothing
 **/
void print_line(int n)
{
int i;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
}
