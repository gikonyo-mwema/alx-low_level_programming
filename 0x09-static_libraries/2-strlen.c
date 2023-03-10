#include <stdio.h>

/**
 * _strlen - Return length of string
 * @str: string
 * Return: length of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
