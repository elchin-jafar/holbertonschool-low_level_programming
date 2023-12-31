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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
