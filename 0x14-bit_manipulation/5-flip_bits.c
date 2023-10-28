#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: base 10 number
 * @m: base 10 number
 *
 * Return: Number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k;
	int len = 0;

	k = n ^ m;
	while (k != 0)
	{
		len += k & 1;
		k = k >> 1;
	}
	return (len);
}
