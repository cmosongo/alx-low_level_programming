#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase except for 'qe'
 * Return: 0
 */
int main(void){

	char val;
	for ( val= 'a'; val <= 'z'; val++)
		if (val != 'e' && val != 'q')
			putchar(val);
	putchar('\n');
	return (0);
}
