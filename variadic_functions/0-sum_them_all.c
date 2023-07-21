#include"variadic_function.h"
#include<stdarg.h>
/**
 *sum_them_all - function that return the sum
 *@n: the parameters number
 *@...: a varaible number of parameters
 *Return: 0 if n = 0 or the sum
 *
 **/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list list;
va_start(list, n);
if (n == 0)
{
return (0);
}
else
for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
va_end(list);
}
return (sum);
}
