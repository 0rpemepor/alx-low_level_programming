#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /**
 * main - for Random Numbers
 *
 * Description: this generate a random variables
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);/* your code goes there */
	return (0);
}
