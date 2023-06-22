#include"main.h"
/**
*_islower - Entry of the program
*
*The program is checking for lowercase character
*
*Return: 1 if C is lowercase
**/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
