#include"main.h"
/**
 *string_toupper - Function that changes all lowercase of str to uppercase
 *@str: input value
 *Return: the string in uppercase
 **/
char *string_toupper(char *str)
{
int *p = str;
while (*p != '\0')
{
*p = toupper(*p);
p++;
}
return (str);
}
