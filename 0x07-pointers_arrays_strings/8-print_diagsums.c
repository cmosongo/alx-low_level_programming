#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of a square matrix of ints
 * @a: 2d array of ints
 * @size: matrix size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	/*Declaring variables*/
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size) /*number repetitions*/
	{
		/*sums for diagsums*/
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);

		i++; /*add +1*/
	}

	printf("%i, %i
", sum1, sum2);

}