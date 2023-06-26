#include"main.h"
/**
 *print_triangle - prints a triangle of squares
 *@size: the size of the squares
 *Return: nothing
 **/
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
{
putchar(32);
}
for (k = 0; k <= i; k++)
{
putchar(35);
}
putchar('\n');
}
}
}
