#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - a function to free dog
 *
 * @d: pointer to dog_t
 *
 * Return: 0 always
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
