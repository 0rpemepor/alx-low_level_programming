#include "main.h"
#include <stdio.h>
/**
*_puts - to display string
*@str: the strinf
*Return:(0) Success
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
