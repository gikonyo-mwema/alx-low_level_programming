#include "main.h"

/**
 * create_array - create array of chars, and initialize it to specific char
 * @size: size of char
 * @c: char
 *
 * Return: pointer to array, 0 otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	if (size <= 0)
		return (0);

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (0);

	for (j = 0; j < size; j++)
		*(s + j) = c;

	*(s + j) = '\0';

	return (s);
}
