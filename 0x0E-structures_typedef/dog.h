#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - this is a new data structure
 * @name: the first arg
 * @age: the second one
 * @owner: the 3rd one
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
