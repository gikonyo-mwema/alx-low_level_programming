#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 * @haystack: string to search
 * @needle: characters string to look out for
 *
 * Return: pointer to byte
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int n_ind, h_ind;

	for (h_ind = 0; haystack[h_ind] != '\0'; n_ind++)
	{
		if (haystack[h_ind + n_ind] != needle[n_ind])
		{
			break;
		}
	}
	if (!needle[n_ind])
		return (haystack + h_ind);
	return (0);
}
