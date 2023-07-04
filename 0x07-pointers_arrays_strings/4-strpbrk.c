#include "main.h"

/**
 * _strpbrk - match characters
 * @s: Pointer to string.
 * @accept: Pointer for list of characters to match in s
 * Return: any character that match
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*loop through string*/
	{
		j = 0;
		while (accept[j] != '\0') /*loop through maching list for all string*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++; /*next list element*/
		}

		s++; /*nex string element*/
	}
	return (0);

}

