#include "main.h"
/**
 * print_most_numbers - prints nos without 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int no;

	for (no = '0'; no <= '9'; no++)
	{
		if (no != '2' && no != '4')
			_putchar(no);
	}
	_putchar('\n');
}
