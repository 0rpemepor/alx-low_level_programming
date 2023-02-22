#include <stdio.h>
/**
* print_alphabet - Prints the lowercase alphabet to the console
*/

void print_alphabet(void)
{
	char c;

	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
