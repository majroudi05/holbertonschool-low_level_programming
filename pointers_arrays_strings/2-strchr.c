#include"main.h"
/**
 *_strchr - function thatlocates character in a string
 *@s: input value
 *@c:input value
 *Return: a pointer
 **/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
