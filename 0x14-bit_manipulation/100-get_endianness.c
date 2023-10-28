#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * void: No argument
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1, end;
	char *c = (char *)&n;

	if (*c)
		end = 1;
	else
		end = 0;
	return (end);
}
