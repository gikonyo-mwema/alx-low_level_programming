#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: string input
 *
 * Return: return
 */
char *string_toupper(char *str)
{
	int no;

	no = 0;
	while (str[no])
	{
		if (str[no] >= 'a' && str[no] <= 'z')
			str[no] = str[no] - 32;
		no++;
	}
	return (str);
}
