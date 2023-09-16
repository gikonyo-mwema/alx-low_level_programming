#include "main.h"
/**
 * more_numbers - print 10 times (0 -14)
 *
 * Return: void
 */
void more_numbers(void)
{
	int no;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (no = 0; no <= 14; no++)
		{
			if (no > 9)
			{
				_putchar('1');
			}
			_putchar((no % 10) + 48);
		}
		_putchar('\n');
	}
}
