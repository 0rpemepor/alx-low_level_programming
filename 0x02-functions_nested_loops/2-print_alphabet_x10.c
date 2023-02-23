#include "main.h"
#include <stdio.h>
/**
*print_alphabet_x10 - a function to print
*
*
* Return: (0) Success
*/
void print_alphabet_x10(void)
{
	char letter;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
	putchar('\n');
	}
}
