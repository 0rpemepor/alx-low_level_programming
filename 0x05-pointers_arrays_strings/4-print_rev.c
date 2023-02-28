#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - to reverse a string
 * @s: the string
 * Return: (0) Success
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
