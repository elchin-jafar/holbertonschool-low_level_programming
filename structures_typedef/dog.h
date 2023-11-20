#ifndef DOG_H
#define DOG_H

/**
 * struct dog - simple struct
 * @name: name of dawg
 * @age: age of dawg
 * @owner: owner of dawg
 *
 * Description: structure of the best dawg in da world
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */

void init_dog(struct dog *d, char *name, float age, char *owner);
