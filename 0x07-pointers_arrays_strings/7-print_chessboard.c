#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: chess
*/

void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(*(*(r + a) + c));
		}
	_putchar('\n');
	}
}
