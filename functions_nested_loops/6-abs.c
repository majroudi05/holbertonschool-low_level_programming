#include"main.h"
/**
* _abs - computes the absolute value of an integer
* @n: the integer to calculate the absolute value for
* Return: the absolute value of the input integer
**/
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
