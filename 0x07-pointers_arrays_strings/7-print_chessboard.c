#include "main.h"

/**
 * print_chessboard - used to print a chess board with its pieces
 * @a: amount of rows
 * @[8]: amount of collumns
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
