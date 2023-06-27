#include "main.h"
/**
 *swap_int - function that swaps the values of tow integers
 *@a: the first value
 *@b: the scond value
 *Return: nothing
 **/
void swap_int(int *a, int *b)
{
int s = *a;
*a = *b;
*b = s;
}
