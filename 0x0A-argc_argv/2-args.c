#include <stdio.h>

/**
 * main - to print each args followed by a new line
 * @argc: for counting the variable passed
 * @argv: for holding the strings
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
