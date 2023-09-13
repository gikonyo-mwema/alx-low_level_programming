#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	count = 0;
	while (count <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		count++;
		_putchar('\n');
	}
}
