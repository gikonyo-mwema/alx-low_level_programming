#include "main.h"
/**
 * _strchr - locates a characher in a sring
 * @s: string.
 * @c: character.
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int index, s_len;

	s_len = 0;

	for (index = 0; *(s + index) != '\0'; index++)
		s_len++;

	index = 0;

	while (index <= s_len)
	{
		if (*(s + index) == c)
			return (s + index);
		index++;
	}

	return (0);
}
