#include "main.h"

/**
 * _strstr - find first instance of char in string
 * @haystack: Pointer to string
 * @needle: Char to find(FILO)
 * Return: return 0
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *string1, *string2;

	while (*haystack != '\0')
	{
		string1 = haystack;
		string2 = needle;

		while (*haystack != '\0' && *string2 != '\0' && *haystack == *string2)
		{
			haystack++;
			string2++;
		}

		if (*string2 == '\0')
			return (string1);

		haystack = string1 + 1;
	}
	return (0);
}

