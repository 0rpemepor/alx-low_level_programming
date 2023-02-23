#include "main.h"
/**
* _islower - a function that checks for lowercase
*
* @c: int for comparing
*
* Return: (1) if lowercase otherwise(0)
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
