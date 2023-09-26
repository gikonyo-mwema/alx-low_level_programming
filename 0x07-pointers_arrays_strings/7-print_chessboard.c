#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: imput pointer
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int j, k = 0;

	for (j = 0; j < 64; j++)
	{
		if (j % 8 == 0 && j != 0)
		{
		       k = j;
		       _putchar('\n');
		}
		_putchar(a[j / 8][j - k]);
	}
	_putchar('\n');
	return (0);
}
