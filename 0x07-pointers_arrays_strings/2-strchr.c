 #include "main.h"

/**
 * _strchr - finds a char in a string
 * @s: Pointer to string
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0') /*loop through s*/
	{
		if (*s == c) /*find s == c*/
		{
			return (s); /*return s*/
		}

		++s;/*increment for next run*/
	}

	if (*s == c)
	{
		return (s);

	}

	return (0);/* values null*/
}

