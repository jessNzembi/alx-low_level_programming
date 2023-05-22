#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dog - prints a structure
 * @d: member of the structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			printf("nil\n");
		if (!d->age)
			printf("nil\n");
		if (!d->owner)
			printf("nil\n");
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
