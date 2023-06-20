#include<stdio.h>
/**
*main - Entry point of the program
*
*
*This program print the lowercase alphabet in reverse
*
*
*Return: Always 0 (indication success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch <= 'a'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
