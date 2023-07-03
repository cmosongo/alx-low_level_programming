#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - tests whether number a random number
 * is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n != 0)
	{
		if (n > 0)
			printf("%i is positive\n",n);
		if (n < 0)
			printf("%i is negative\n",n);
	}
	else
		printf("%i is zero\n",n);
	return (0);
}

