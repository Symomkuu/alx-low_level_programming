#include "main.h"
/**
 * print_chessboard - prints the chess board
 * @a: array of characters
 */
void print_chessboard(char (*a)[8])
{
	int s;
	int n;

	for (s = 0; s < 8; s++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[s][n]);
		_putchar('\n');
	}
}
