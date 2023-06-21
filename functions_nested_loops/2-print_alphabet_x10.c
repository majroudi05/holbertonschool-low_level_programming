#include"main.h"
/**
*print_alphabet_x10 - Entry of the program
*
*The program print 10 times the alphabet in lowercase
*
*Return: always 0 (indication of success)
**/
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0 ; i <= 10 ; i++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
}
_putcahr('\n');
}
