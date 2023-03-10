#include "main.h"

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: If n is a prime number, return 1. Otherwise, return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)  /* 1 is not a prime number */
		return (0);
	else if (n == 2)  /* 2 is a prime number */
		return (1);
	else
		return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Check if an integer is a prime number.
 * @n: The integer to check.
 * @divisor: The current divisor to check.
 *
 * Return: If n is a prime number, return 1. Otherwise, return 0.
 */
int is_prime_helper(int n, int divisor)
{
	if (n % divisor == 0)  /* n is not a prime number */
		return (0);
	else if (divisor * divisor > n)  /* n is a prime number */
		return (1);
	else
		return (is_prime_helper(n, divisor + 1));
}
