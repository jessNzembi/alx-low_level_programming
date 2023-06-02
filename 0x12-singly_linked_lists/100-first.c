#include <stdio.h>

/**
 * my_constructor - prints message before main
 *
 * Return: void
 */

void my_constructor(void) __attribute__((constructor));

void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
