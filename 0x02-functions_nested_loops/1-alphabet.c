#include "main.h"
#include <stdio.h>
/**
* print_alphabet - Prints the lowercase alphabet to the console
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
