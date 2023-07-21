#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: printed string.
 * @n: strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_va;
	unsigned int j;
	char *string;

	va_start(list_va, n);

	for (j = 0; j < n; j++)
	{
		string = va_arg(list_va, char *);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list_va);
}
