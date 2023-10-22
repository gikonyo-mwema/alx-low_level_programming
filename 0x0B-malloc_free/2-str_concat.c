#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concates two strings
 *
 * @s1: output string
 * @s2: input string
 *
 * Return: pointer newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, k;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
	}

	s = (char *) malloc(((i + k) + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		s[i] = s2[k];
		i++;
	}
	return (s);
}
