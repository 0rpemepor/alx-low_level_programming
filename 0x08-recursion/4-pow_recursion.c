#include "main.h"
#include <math.h>

/**
 * _pow_recursion - a function that returns the value of x ** y
 * @x: the value
 * @y: the power value
 *
 * Return: if y is < 0, return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
