#include "main.h"

/**
 * print_number - function that prints an integer.
 *
 * @n: integer
 * Return: integer
 */
void print_number(int n)
{
	unsigned int abs;

	if (n < 0)
	{
		abs = -n;
		_putchar(45);
	}
	else
	{
		abs = n;
	}
	if (abs / 10)
	{
		print_number(abs / 10);
	}
	_putchar((abs % 10) + 48);
}
