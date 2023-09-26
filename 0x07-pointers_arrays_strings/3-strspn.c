#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: characters
 *
 * Return: character
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_index, a_index, no_matches, h_match;

	no_matches = 0;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		h_match = 0;
		for (a_index = 0; accept[a_index] != '\0'; a_index++)
		{
			if (s[s_index] == accept[a_index])
			{
				no_matches++;
				h_match = 1;
				break;
			}
		}
		if (!h_match)
			return (no_matches);
	}
	return (no_matches);
}
