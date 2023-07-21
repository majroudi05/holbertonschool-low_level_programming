#include<stdlib.h>
#include"dog.h"
/**
 *init_dog - Init a dog struct
 *@d: a dog struct
 *@name: the dog name
 *@age: the dog age
 *@owner: the dog owner
 *Return: nothing
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
