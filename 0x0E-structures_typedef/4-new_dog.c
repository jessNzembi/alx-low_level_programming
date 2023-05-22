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
	n_dog->name = malloc(strlen(name) + 1);
	if (!name)
		return (NULL);
	n_dog->age = age;
	n_dog->owner = malloc(strlen(owner) + 1);
	if (!owner)
		return (NULL);
	return (n_dog);
}
