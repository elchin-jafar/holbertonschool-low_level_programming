#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializing struct dog d with given info
 * @d: structure to initialize
 * @name: given name to pass to d
 * @age: given age to pass to d
 * @owner: given owner to pass to d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
