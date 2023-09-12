#include <stdio.h>
#include "dog.h"
/**
 * init_dog - this function intianalize a variable of type struct dog
 * @d: the iteam to init
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;
else
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

}
