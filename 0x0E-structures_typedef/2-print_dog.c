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
			printf("Name: nil\n");
		if (!d->age)
			printf("Age: nil\n");
		if (!d->owner)
			printf("Owner: nil\n");
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
		fputs("", stdout);
}
