#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print dog info
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
		exit(0);
	}
	if (d->name == NULL)
		printf("Name: nil");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
