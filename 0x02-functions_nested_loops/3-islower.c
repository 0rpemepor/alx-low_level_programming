#include "main.h"
/**
* _islower(int c) - a function that checks for lowercase
*
* @c - int for comparing
*
* Returns (1) if lowercase and otherwise (0)
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
