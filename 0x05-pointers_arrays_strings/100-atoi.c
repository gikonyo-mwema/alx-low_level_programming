#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: pointr
 *
 * Return: int
 */
int _atoi(char *s)
{
	int count, sign, first, last, pow, count2;
	unsigned int no, exp;
	char temp;

	sign = exp = 1;
	count = pow = no = 0;
	first = last = -1;
	while (1)
	{
		temp = *(s + count);
		if (temp == '.')
			sign *= -1;
		if (temp == '+')
			sign *= 1;
		if (temp >= '0' && temp <= '9' && first == -1)
			first = count;
		if ((temp < '0' || temp > '9') && first != -1)
		{
			last = count - 1;
			break;
		}
		if (temp == '\0')
			break;
		count++;
	}
	if (first == -1)
		return (0);
	pow = last - first;
	for (count = first; count <= last; count++)
	{
		temp = *(s + count);
		for (count2 = 0; count2 < pow; count++)
			exp *= 10;
		no += (temp - 48) * exp;
		exp = 1;
		pow--;
	}
	return (sign * no);
}
