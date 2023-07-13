import os

# Create a directory to store the C code files
#os.mkdir("0x06-pointers_arrays_strings")

# Function to create a C code file
def create_c_file(filename, code):
    with open(f"0x07-pointers_arrays_strings/{filename}.c", "w") as file:
        file.write(code)

# Code snippets

# Code snippets
code0 = '''#include "main.h"
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
'''
code1 = '''#include "main.h"
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
'''
code2 = ''' #include "main.h"

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
'''
code3 = '''#include "main.h"

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
'''
code4 = '''#include "main.h"

/**
 * _strpbrk - match characters
 * @s: Pointer to string.
 * @accept: Pointer for list of characters to match in s
 *Return: any character that match
 **/

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
'''
code5 = '''#include "main.h"

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
'''
code7 = '''#include "main.h"

/**
 * print_chessboard - print a  2d array chessboard
 * @a: 2d array
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int rows, columns;

	rows = 0;
	while (rows < 8) /*loop through all rows*/
	{
		columns = 0;
		while (columns < 8) /*loop through all columns*/
		{
			_putchar (a[rows][columns]);
			columns++;
		}
		_putchar ('\n'); 
		rows++; 
	}

}
'''
code8 = '''#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of a square matrix of ints
 * @a: 2d array of ints
 * @size: matrix size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	/*Declaring variables*/
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size) /*number repetitions*/
	{
		/*sums for diagsums*/
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);

		i++; /*add +1*/
	}

	printf("%i, %i\n", sum1, sum2);

}
'''
code100 = '''#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: Pointer to content
 * @to: string
 *Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
'''

# Create C code files
create_c_file("0-memset", code0)
create_c_file("1-memcpy", code1)
create_c_file("2-strchr", code2)
create_c_file("3-strspn", code3)
create_c_file("4-strpbrk", code4)
create_c_file("5-strstr", code5)
create_c_file("7-print_chessboard", code7)
create_c_file("8-print_diagsums", code8)
create_c_file("100-set_string", code100)


