#include"main.h"
/**
 *cap_string - function that capitalizes all words of string
 *@str: input value
 *Return: the string after change
 **/
char *cap_string(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] == ' ' ||
str[i] == '\t' ||
str[i] == '\n' ||
str[i] == ',' ||
str[i] == ';' ||
str[i] == '.' ||
str[i] == '!' ||
str[i] == '?' ||
str[i] == '"' ||
str[i] == '(' ||
str[i] == ')' ||
str[i] == '{' ||
str[i] == '}')
if (str[i] >= 'a' && str[i] <= 'z')
str[i + 1] = str[i + 1] - ('a' - 'A');
i++;
}
return (str);
}
