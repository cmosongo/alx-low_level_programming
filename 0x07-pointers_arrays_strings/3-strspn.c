#include "main.h"

/**
 * _strspn - finds a char in a string
 * @s: Pointer to string.
 * @accept: Pointer for list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
	int i, j;
	int count = 0;
	char *string1, *string2;

	string1 = s;
	string2 = accept;

	i = 0;
	while (string1[i] != '\0') /*loop through string*/
	{
		j = 0;
		while (string2[j] != '\0') /*loop through list fo all string characters*/
		{
			if (string2[j] == string1[i]) /*check for match*/
			{
				count++; /*increment count*/
				break;
			}

			j++;    /*next string value*/
		}

		if (s[i] != accept[j])
		{
			break;
		}

		i++;
	}

	return (count);
}

