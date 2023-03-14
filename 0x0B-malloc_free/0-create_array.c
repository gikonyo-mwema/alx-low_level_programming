#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes with specific char
 *
 * @size: size of the array
 * @c: the char to initialize the array
 *
 * Return: a pointer to the array, or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
