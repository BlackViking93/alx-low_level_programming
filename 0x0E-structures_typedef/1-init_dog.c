#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - a function that initialize a variable of type struct dog
* @d: a pointer to the struct dog
* @name: a string 'name'
* @age: a float 'age'
* @owner: a string 'owner'
* Return: returns nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
