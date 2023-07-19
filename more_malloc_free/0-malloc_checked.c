#include"main.h"
#include<stdlib.h>
/**
 *malloc_checked - function that allocate memory
 *@b: size of the memory
 *Return: the pointer to the memory allocated
 *
 **/
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NUUL)
{
exit(98);
}
return (p);
}
