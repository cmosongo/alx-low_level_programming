#include "main.h"
#include <stdio.h>

/**
 * _strcpy - makes a copy of a string
 * @dest: args address of buffer to copy str to
 * @src: args address str to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}

