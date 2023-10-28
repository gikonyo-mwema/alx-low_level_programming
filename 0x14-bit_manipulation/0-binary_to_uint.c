#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converte number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int current_bit = 1;
	int len = 0;
	int i;

	if (b == 0)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '\0' && b[len] != '1')
			return (0);
		len++;
	}

	len = len - 1;

	for (i = 0; len >= 0; i++, len--)
	{
		char current_char = b[len];
		if (current_char == '1')
		{
			result += current_bit;
		}
		current_bit = current_bit * 2;
		if (len == 0)
			break;
	}

	return (result);
}
