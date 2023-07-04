#include "main.h"

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
		_putchar ('
'); 
		rows++; 
	}

}
