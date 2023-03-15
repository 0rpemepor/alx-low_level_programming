#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure, NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
