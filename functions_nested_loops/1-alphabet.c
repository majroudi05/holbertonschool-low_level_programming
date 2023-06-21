#include"main.h"
/**
*main - Entry of the program
*
*The program prints the alphabet in lowercase
*
*Return: always 0(indication of succes)
**/
void print_alphabet(void){
char ch;
for(ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
return (0);
}
