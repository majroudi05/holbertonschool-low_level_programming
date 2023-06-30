#include"main.h"
/**
 *puts2 - Function that prints every other character of string
 *@str: the string to work on it
 *Return: nothing
 **/
void puts2(char *str)
{
int i, j = 0;
while (str[j] != '\0')
j++;
for (i = 0; i < j; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
