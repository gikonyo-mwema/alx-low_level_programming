#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: imput pointer
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int no1, no2;

	for (no2 = 0; no2 < 8; no2++)
	{
		for (no1 = 0; no1 < 8; no1++)
		{
			_putchar(a[no2][no1]);
		}
		_putchar('\n');
	}
}
