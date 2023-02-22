#include "main.h"

/**
 * print_sign - outputs sign of no.
 * @n: no. to be checked
 * Return: 1 positive, -1 negative or zero anything else
 */
int print_sign(int n)
{
	if(n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
