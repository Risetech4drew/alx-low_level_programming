#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: the 8x8 array representing the chessboard
 *
 * Description: the function prints a chessboard using a two-dimensional
 * array of characters.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
		_putchar(a[i][j]);
		if (j < 7)
		{
		_putchar(' ');
		}
		j++;
		}
		_putchar('\n');
		i++;
	}
}
