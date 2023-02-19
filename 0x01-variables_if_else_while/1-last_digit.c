#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - main starts here
*
*
* Return: (0) success
*/
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (n > 5)
		printf("%d and is greater than 5\n", ld);
	else if (n == 0)
		printf("%d and is 0\n", ld);
	else if (n < 6 && n != 0)
		printf("%d and is less than 6 and not 0\n", ld);
	return (0);
}
