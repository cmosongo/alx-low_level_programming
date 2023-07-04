#include "main.h"
/**
 *_memcpy -   cpy n bytes from "from" to adress "to"
 *@dest: Pointer to content
 *@src: Pointer to source
 *@n: number of bytes
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	z = 0;
	do {
		/*logic*/
		*(dest + z) = *(src + z);
		z++;

	} while (z < n);

	return (dest);
}
