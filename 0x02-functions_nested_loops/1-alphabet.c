#include "main.h"
#include <stdio.h>
/**
*print_alphabet - to print lower case alphabet
*
*
*Return: (0) Success
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
