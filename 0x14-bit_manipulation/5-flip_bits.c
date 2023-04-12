#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_to_flip = 0;
	unsigned long int flip_bits = n ^ m;

	while (flip_bits > 0)
	{
		bits_to_flip += (flip_bits & 1);
		flip_bits >>= 1;
	}

	return (bits_to_flip);
}
