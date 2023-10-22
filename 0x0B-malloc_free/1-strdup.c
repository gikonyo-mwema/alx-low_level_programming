#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer to duplicated string, NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	s = (char *) malloc((i + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		s[j] = str[j];

	s[i + 1] = '\0';
	return (s);
}
