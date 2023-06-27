#include <stdio.h>

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a - args int pointer
 * @b - args int pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

