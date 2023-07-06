#include"main.h"
/**
 *factorial - function that return the factorial of number
 *@n: the input value
 *Return: the factorial of @n
 **/
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (factorial(n - 1));
}
