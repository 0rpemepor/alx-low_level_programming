#include <stdio.h>
#include <stdlib.h>
/**
 * multiplication - a program that multiplies two args
 * @a: first args
 * @b: second args
 * Return: a and b
 */
int multiplication(int a, int b)
{
	return a * b;
}

/**
 * main - it calls the multiplication function
 * @argc: it counts arguments
 * @argv: it holds arguments
 * Return: 0 always
 */
int main (int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = multiplication(a, b);

	printf("The multiplication of %d and %d is: %d\n", a, b, result);

	return 0;
}
