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

	while (*haystack != ' ')
	{
		string1 = haystack; 
		string2 = needle;

		while (*haystack != ' ' && *string2 != ' ' && *haystack == *string2)
		{
			haystack++;
			string2++;
		}

		if (*string2 == ' ')
			return (string1);
			
		haystack = string1 + 1;
	}
	return (0);
}
