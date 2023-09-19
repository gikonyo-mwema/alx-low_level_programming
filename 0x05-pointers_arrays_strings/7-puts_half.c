#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: pointer to string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a, b, len, middle;

	len = 0;

	for (a = 0; *(str + a) != '\0'; a++)
	{
		if (*(str + a) != '\0')
			len++;
	}
	if (len > 0 && len % 2 != 0)
	{
		middle = (len / 2) + 1;
	}
	else if (len > 0 && len % 2 == 0)
	{
		middle = (len / 2);
	}
	else
	{
		middle = len;
	}
	for (b = middle; b < len; b++)
	{
		_putchar(*(str + b));
	}
	_putchar('\n');
}
