#include"dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *free_dog - functinon that free dogs
 *@d: the dog attributes
 *Return: nothing
 **/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
