#include "main.h"
/**
 * puts2 - prints every character in a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *k = str;
	int l;

	while (*k != '\0')
	{
		k++;
		i++;
	}
	j = i - 1;
	for (l = 0; l <= j; l++)
	{
		if (l % 2 == 0)
		{
			_puthar(str[l]);
		}
	}
	_putchar('\n');
}
