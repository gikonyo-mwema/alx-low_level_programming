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
	int a, b, length = 0;
	char temp;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		length++;
	}

	*(dest + length) = '\0';

	for (b = 0; b < length; b++)
	{
		temp = *(src + b);
		*(dest + b) = temp;
	}
	return (dest);
}
