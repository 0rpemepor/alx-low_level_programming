#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * This program generates a random number using the rand() function
 * and then checks whether the number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d", n);
	}
	else if (n == 0)
	{
		printf("%d", n);
	}
	else
	{
		printf("%d", n);
	}
	return (0);
}
