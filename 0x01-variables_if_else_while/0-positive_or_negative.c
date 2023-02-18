#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /**
 * Generate a Random Number
 *
 * Description: A positive, Nerative or Zero
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
		printf(n, "%d is positive/n");
	}
	else if (n == 0)
	{
		printf(n, "%d is zero/n");
	}
	else
	{
		printf(n, "%d is negative/n");
	}
	return (0);
}
