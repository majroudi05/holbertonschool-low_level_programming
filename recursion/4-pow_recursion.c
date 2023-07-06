#include"main.h"
/**
 *_pow_recursion - function that return the @x raised to power of @y
 *@x: input value
 *@y: input value
 *Return: the raised of @x by @y
 **/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
