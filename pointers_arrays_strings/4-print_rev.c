#include"main.h"
/**
 *print_rev - prints a string in reverse
 *@s: the string to print
 *Return: void
 **/
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
for (i -= 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
