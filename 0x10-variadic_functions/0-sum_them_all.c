#include "variadic_functions.h"

/**
 * sum_them_all - sums up all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sum = 0;
	va_list list_va;

	if (n == 0)
		return (0);

	va_start(list_va, n);

	for (j = 0; j < n; j++)
		sum += va_arg(list_va, int);

	va_end(list_va);

	return (sum);
}
