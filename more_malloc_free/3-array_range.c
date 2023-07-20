#include"main.h"
#include<stdlib.h>
/**
 *array_range - function that create ana array
 *@min: input value
 *@max: inpute value
 *Return: pointer
 **/
int *array_range(int min, int max)
{
int *a;
int i;
if (min > max)
{
return (NULL);
}
a = malloc((max - min + 1) * sizeof(int));
if (a == NULL)
{
return (NULL);
}
for (int i = min; i <= max; i++)
{
a[i - min] = i;
}
return (a);
}
