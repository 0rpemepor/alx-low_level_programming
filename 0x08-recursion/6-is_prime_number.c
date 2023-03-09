#include "main.h"

/**
 * is_prime_number - a func that returns 1 if the int is a prime num
 *
 * @n: the prime number
 *
 * Return: 1 if it's prime number otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}
