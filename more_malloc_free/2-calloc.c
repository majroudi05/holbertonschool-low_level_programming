#include"main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 *_calloc - function that allocates memory
 *@nmemb: input value
 *@size: input value
 *Return: pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
return (NULL);
void* p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}
memset(p, 0, nmemb * size);
return (p);
}
