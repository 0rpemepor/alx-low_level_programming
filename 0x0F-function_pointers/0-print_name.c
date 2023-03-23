#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function to print name
 *
 * @name: the name to be displayed
 * @f: the function pointer
 *
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	(*f)(name);
}
