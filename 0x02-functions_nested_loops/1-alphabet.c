#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabets lower case
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
