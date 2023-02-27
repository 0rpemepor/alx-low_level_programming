#include "main.h"

/**
* _strlen - returns lenght of a string
* @s: strng to return
* Return: the (len) lenght of a string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
