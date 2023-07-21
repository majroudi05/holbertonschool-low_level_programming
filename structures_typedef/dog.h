#ifdef MY_MACRO_H
#define MY_MACRO_H
/**
 *struct dog - dog attributes
 *@name: name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 **/
struct dog
{
  char *name;
  float age;
  char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
