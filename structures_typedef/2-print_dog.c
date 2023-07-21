#include"dog.h"
#include<stdlib.h>
/**
 *print_dog - print all the dog attributes
 *@d: the dog struct
 *Return: nothing
 *
 **/
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name) ? d->name : "(nil)");
printf("Age: %s\n", (d->age) ? d->age : 0);
printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
}
