#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: characer
 *
 * Return: 1 (success), 0 (error)
 */
int _isalpha(int c)
{
	if
		((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
			return (1);
		}
	return (0);
}
