#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - this is a new data structure
 * @name: the first arg
 * @age: the second one
 * @owner: the 3rd onei
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - the new name of the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
