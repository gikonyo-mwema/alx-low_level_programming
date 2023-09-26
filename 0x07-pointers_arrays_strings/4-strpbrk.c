#include "main.h"
/**
 * _strpbk - searches a string for any of bytes
 *
 * @s: string 
 * @accept: character
 * Return: pointer t o the byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int s_ind, a_ind;

	for (s_ind = 0; s[s_ind] != '\0'; s_ind++)
	{
		for (a_ind = 0; accept[a_ind] != '\0'; a_ind++)
		{
			if (s[s_ind] == accept[a_ind])
			{
				return ((s + s_ind));
			}
		}
	}
	return (0);
}
