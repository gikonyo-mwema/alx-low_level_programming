#include "main.h"
/**
 * factorial - Find the factorial of input
 * @n: an argument
 * Return: factorial , -1 if lower than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
