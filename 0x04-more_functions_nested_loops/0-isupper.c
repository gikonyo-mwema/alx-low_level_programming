#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: 1 (uppercase) otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 99)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
