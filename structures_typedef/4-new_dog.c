#include"dog.h"
#include<stdlib.h>
#include<stdio.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 *new_dog - create new dog
 *@name: the dog name
 *@age: the dog age
 *@owner: the dog owner
 *Return: Null if the function fails
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *m_dog;
int n = 0, o = 0;
if (n != NULL && o != NULL)
{
n = _strlen(name) + 1;
o = _strlen(owner) + 1;
m_dog = malloc(sizeof(dog_t));
if (m_dog == NULL)
return (NULL);
m_dog->name = malloc(sizeof(char) * n);
if (m_dog->name == NULL)
{
free(m_dog);
return (NULL);
}
m_dog->owner = malloc(sizeof(char) * o);
if (m_dog == NULL)
{
free(m_dog->name);
free(m_dog);
return (NULL);
}
m_dog->name = _strcpy(m_dog->name, name);
m_dog->name = _strcpy(m_dog->owner, owner);
m_dog->age = age;
}
return (m_dog);
}
/**
 *_strlen - return the length of a string
 *@s: string to count
 *Return: string length
 **/
int _strlen(char *s)
{
int c = 0;
for (; *s != '\0'; s++)
{
c++;
}
return (c);
}
/**
 *_strcpy - copy a string
 *@dest: destination value
 *@src: source value
 *Return: pointer to dest
 **/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
