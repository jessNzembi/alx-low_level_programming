#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

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
			d->name = "(nil)";
		if (!d->owner)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
		fputs("", stdout);
}
