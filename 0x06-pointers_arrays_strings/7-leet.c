#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: the pointer to dest.
 */
char *leet(char *s)
{
	int n = 0, i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + n) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + n) == lower[1] || *(s + n) == upper[i])
			{
				*(s + n) = num[i];
				break;
			}
		}
		n++;

	}
	return (s);
}
