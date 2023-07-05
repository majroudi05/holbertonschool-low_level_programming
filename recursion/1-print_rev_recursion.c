#include"main.h"
/**
 *_print_rev_recursion - Function that print string in reverse
 *@s: input value
 *Return: nothing
 **/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(char *s);
s--;
putchar(*s)
}
