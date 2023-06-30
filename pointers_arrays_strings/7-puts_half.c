#include"main.h"
/**
 *puts_half - Function that prints half of string
 *@str: The string to print
 *Return: nothing
 **/
void puts_half(char *str)
{
int i = 0;
int j;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 1)
{
j = (i - 1) / 2;
j += 1;
}
else
{
j = i / 2;
}
for (; j < i; j++)
{
putchar(str[j]);
}
putchar('\n');
}
