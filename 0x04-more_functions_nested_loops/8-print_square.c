#include "main.h"
/**
 * print_square - function that prints a square
 *
 * @n: size of square
 * Return: void
 */
void print_square(int n)
{
	int no1, no2;

	if (n > 0)
	{
		for (no1 = 0; no1 < n; no1++)
		{
			for (no2 = 0; no2 < n; no2++)
			{
				_putchar('#');
				if (no2 == (n - 1))
					_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
