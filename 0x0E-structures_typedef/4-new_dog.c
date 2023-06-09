#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (!n_dog)
		return (NULL);
	n_dog->name = strdup(name);
	if (!name)
		return (NULL);
	strcpy(n_dog->name, name);
	n_dog->age = age;
	n_dog->owner = strdup(owner);
	if (!owner)
		return (NULL);
	strcpy(n_dog->owner, owner);
	return (n_dog);
}
