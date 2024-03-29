#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array
 *
 * @array: holds the element of the arrays
 * @size: size of the arrays
 * @action: the pointer
 * Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
