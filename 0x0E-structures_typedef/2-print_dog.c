#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog- prints out astruct dog
 * Description: prints a struct dog.
 * @d: struct dog to print
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nill)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
