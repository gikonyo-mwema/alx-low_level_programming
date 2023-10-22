#include "main.h"

/**
 * factorial - factorial of n
 * @n: number
 *
 * Return: on success 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
