#include "main.h"

/*
 *string_toupper - changes all lowercase to 
 *		  uppercase
 *@s: input str
 *
 *Return: 	uppercase @s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
