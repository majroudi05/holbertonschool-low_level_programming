#include"main.h"
/**
 *_isdigit - check if a character is a digit
 *@c: the charactre checked
 *Return: 1 for the digiti or 0 for others
 **/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
