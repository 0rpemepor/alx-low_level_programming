#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - a function to allocate memory using malloc
 * @b: the is the allcocated memory size 
 *
 * Return: P if P != Null
 */

void *malloc_checked(unsigned int b)
{
	void *p;
       
	p = malloc(b);

	if (p == NULL)
		exit(98);

	return p;
}
