#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
