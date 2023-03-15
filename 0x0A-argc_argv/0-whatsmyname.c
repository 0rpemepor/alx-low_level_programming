#include <stdio.h>

/**
 * main - to print it's name followed by a new line
 * @argc: for counting the variable passed
 * @argv: for holding the strings
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	printf ("%s\n", argv[0]);
	printf("Number of arguments: %d\n", argc);
	return (0);
}
