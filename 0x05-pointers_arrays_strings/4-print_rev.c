#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] != '\0')
		{
			i++;
		} else
		{
			break;
		}
	}
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
