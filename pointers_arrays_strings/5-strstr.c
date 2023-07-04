#include"main.h"
/**
 *_strstr - function finds the first occurrence of the string
 *@haystack:input value
 *@needle:inpute value
 *Return: a pointre
 **/
char *_strstr(char *haystack, char *needle)
{
for (; *haystcak != '\0'; haystack++)
{
char *o = haystack;
char t = needle;
while (*o == *t && *t != '\0')
{
o++;
t++;
}
if (*t == '\0')
return (haystack);
}
return (NULL);
}
