#include "main.h"
/**
 *_strlen - function that return the length of a string
 *@s: the string to be checeked
 *Return: the length of @s
 **/
int _strlen(char *s)
{
int l = 0;
while (*s++)
{
l++;
}
return (l);
}
