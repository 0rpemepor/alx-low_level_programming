#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: holds the elements of the array
 * @size: the size of the array
 * @cmp: the function pointer used to compare values
 *
 * Return: the index of the first element for which the cmp function does not return 0,
 * or -1 if no element matches or size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
