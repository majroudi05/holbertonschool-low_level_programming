#include<stdio.h>
/**
 * main - Entry point of the program
 *
 * This program assign to print the alphabet in lowercase except q and e
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
