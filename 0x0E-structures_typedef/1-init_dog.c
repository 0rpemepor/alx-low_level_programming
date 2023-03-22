#include "dog.h"
#include <stddef.h>

/**
 * init_dog - a function that initialize variable dog
 *
 * @d: the struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: 0 if description is found and 1 if NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
