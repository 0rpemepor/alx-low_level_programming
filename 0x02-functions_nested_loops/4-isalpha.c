#include "main.h"
/**
* _isalpha - a function that checks for alphabet
*
* @c: an int for comparing
*
* Return: (1) if alphabet otherwise (0)
*/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
