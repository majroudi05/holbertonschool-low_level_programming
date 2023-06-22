#include"main.h"
/**
* _islower - Entry of the program
* The program is checking for lowercase character
* Return: Always 1 (indication of success)
**/
int _islower(int c)
{
int c;
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
