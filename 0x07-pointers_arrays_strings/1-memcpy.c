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

	for ( z = 0; z < n; z++)
	{
		/* code */
		*(dest + z) = *(src + z);
	}

	return (dest);
}
