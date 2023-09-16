#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer.
 * @n: The integer to print
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int index = n;

	if (n < 0)
	{
		n *= -1;
		index = n;
		_putchar('-');
	}
	index /= 10;
	if (index != 0)
		print_number(index);

	_putchar((unsigned int) n % 10 + '0');
}
