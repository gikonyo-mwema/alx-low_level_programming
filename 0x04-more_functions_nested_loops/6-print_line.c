#include "main.h"
/**
 * print_line - print line with underscore
 *
 * @n: underscores to print
 * Return: 0 on success
 */
void print_line(int n)
{
	int no;

	no = n;
	while (no > 0)
	{
		_putchar('_');
		no--;
	}
	_putchar('\n');
}
