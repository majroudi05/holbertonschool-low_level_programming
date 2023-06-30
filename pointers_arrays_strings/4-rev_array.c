#include"main.h"
/**
 *reverse_array _ Function that reverse the contain of an array
 *@a: array of integers
 *@n: number of elements
 *Return: nothing
 **/
void reverse_array(int *a, int n)
{
int i, j;
for (i = n - 1; i >= n / 2; i--)
{
j = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = j;
}
}
