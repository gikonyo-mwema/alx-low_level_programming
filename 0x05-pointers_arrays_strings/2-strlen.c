#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
	int index = 0;

	while (*(s + index))
		index++;
	return (index);
}
