#include "main.h"
/**
 * factorial - returns the factorial of any number
 * @n: the variable
 *
 * Return: -1 to indicate error or the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
