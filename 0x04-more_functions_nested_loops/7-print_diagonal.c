#include "main.h"
/**
 * print_diagonal - draq diagonal line on the terminal
 *
 * @n: no of times \ will be printed
 * Return: 0 success
 */
void print_diagonal(int n)
{
	int no1, no2;

	if (n > 0)

	{
		for (no1 = 0; no1  <= n; no1++)
		{
			for (no2 = 0; no2 < no1; no2++)
			{
				if (no2 == (no1 - 1))
				{
					_putchar('\\');
					_putchar('\n');
					break;
				}
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
