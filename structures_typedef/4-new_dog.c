#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copy string from src to dest
 * @dest: new space to copy
 * @src: main space of string
 *
 * Return: pointerr to dest
 */

char *_strcpy(char *dest, char *src);

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - create new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	int length_name = 0, index, length_owner = 0;

	for (index = 0; name[index]; index++)
		length_name++;

	for (index = 0; owner[index]; index++)
		length_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * length_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char) * length_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}
