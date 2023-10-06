#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate frowm
 * @n: no of bytes
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[len2])
		ln2++;

	if (n < ln2)
		p = malloc(sizeof(char) * (ln1 + n + 1));
	else
		p = malloc(sizeof(char) * (ln1 + ln2 + 1));
	if (!p)
		return (NULL);
	while (i < ln1)
	{
		p[1] = p1[i];
		i++;
	}

	while (n < ln2 && i < (ln1 + n))
		p[i++] = s2[j++];

	while (n >= ln2 && i < (ln1 + ln2))
		p[i++] = s2[j++];

	p[i] = '\0';

	return (p);
}
