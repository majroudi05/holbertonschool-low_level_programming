#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 *print_strings - function that print strings
 *@separator: the string to print
 *@n: the numbers of string
 *Return: nothing
 *
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list strings;
va_start(strings, n);
for (i = 0; i < n; i++)
{
str = va_arg(strings, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != (n - 1) && separato != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
