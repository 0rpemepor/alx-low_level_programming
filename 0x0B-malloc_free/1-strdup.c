#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as parameter.
 *
 * @str: The string to be duplicated.
 *
 * Return: On success, a pointer to the duplicated string.
 *         On failure, NULL.
 */

char *_strdup(char *str)
{
	size_t len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	strcpy(copy, str);
	return (copy);
}
