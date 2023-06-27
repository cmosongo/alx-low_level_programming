#include "main.h"

/**
 * print_rev - function prints str in reverse,
 * followed by newline
 * @s: args str 
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}

