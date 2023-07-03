#include"main.h"
/**
 *leet - function that encodes a string
 *@str: the input value
 *Return: the string after change
 **/
char *leet(char *str)
{
int i = 0;
int j = 0;
char tmp;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == s1[j])
{
tmp = s2[j];
str[i] = tmp;
}
}
}
return (str);
}
