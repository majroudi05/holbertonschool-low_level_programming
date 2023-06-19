#include<stdio.h>
/**
 * main - Entry point of the program
 *
 * This program assign to print the alphabet in lowercase
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
