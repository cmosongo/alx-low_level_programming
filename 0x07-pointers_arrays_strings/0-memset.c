#include "main.h"
/**
 *_memset - fill memory with constant byte
 *@s: Pointer of memory to fill
 *@b: Value to fill
 *@n: number of bytes
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;
	
	j = 0;
	do
	{
		/* code */
		*(s + j) = b;
		j++;

	} while (j < n);
	
	return (s);
}
