#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: destination
 * @src: source
 *
 * Return: poiner to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (index >= 0)
	{
		*(dest  + index) = *(src + index);
		if (*(src + count) != '\0')
			index++;
		else
			index = -1;
	}
	return (dest);
}
