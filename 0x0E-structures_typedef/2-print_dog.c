#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - a function that prints a struct dog
* @d: a pointer to the struct 'my_dog'
* Return: returns nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

