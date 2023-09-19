#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: pointr
 *
 * Return: int
 */
int _atoi(char *s)
{
	int ch = 0;
	unsigned int n = 0;
	int min = 1;
	int max = 0;

	while (s[ch] == 45)
	{
		min * = -1;
	}
	while (s[ch] >= 48 && s[ch] <= 57)
	{
		max = 1;
		n = (n * 10) + (s[ch] - '0');
	}
	if (max == 1)
	{
		break;
	}
	ch++;
}
n *= min;
return (n);
}
