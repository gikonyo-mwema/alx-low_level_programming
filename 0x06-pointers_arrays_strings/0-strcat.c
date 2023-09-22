#include "main.h"

/**
 * _strcat - concatenate two strings,
 * @dest: destination
 * @src: source.
 * Return: pointer to dest/
 */
char *_strcat(char *dest, char *src)
{
	int no1 = 0;
	int no2 = 0;

	while (*(dest + no1) != '\0')
	{
		no1++;
	}
	while (no2 >= 0)
	{
		*(dest + no1) = *(src + no2);
		if (*(src + no2) == '\0')
			break;
		no1++;
		no2++;
	}
	return (dest);
}
