#include "main.h"
#include <stdio.h>
/**
 * puts2 - to print every other character
 * @str: to print strings
 * Return: (0) Success
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
