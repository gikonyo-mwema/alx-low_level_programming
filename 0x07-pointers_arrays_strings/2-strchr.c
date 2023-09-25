#include "main.h"
/**
 * _strchr - locates a characher in a sring
 * @s: string.
 * @c: character.
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int j = 0;

	for (; *(s + 1) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
