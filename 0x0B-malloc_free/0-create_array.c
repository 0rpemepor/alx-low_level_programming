#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array
 * @size: the allocatedd size for the c
 * @c: the array
 *
 * Return: NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
