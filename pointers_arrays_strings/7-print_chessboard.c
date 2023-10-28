#include "main.h"

/**
 * print_chessboard - prints every single char of a
 * @a: pointer to 2d arr which contains chess board
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
