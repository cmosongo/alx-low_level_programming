#include "variadic_functions.h"

/**
 * print_numbers - console logs numbers.
 * @separator: printed string.
 * @n: integers in function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list list_va;

	va_start(list_va, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(list_va, int));
		if (separator && j < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list_va);
}
