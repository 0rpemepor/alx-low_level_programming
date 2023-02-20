#include <stdio.h>
/**
*main - for base 16 output
*
*
* Return: (0) Success
*/
int main(void)
{
	int n;
	char ch = 'a';

	{
	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	}
	{
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

