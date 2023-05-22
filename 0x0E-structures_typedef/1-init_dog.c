#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * init_dog - initializes struct dog
 * @d: member of the structure
 * @name: mane of dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d || !name || !owner || isnan(age))
		return;
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
