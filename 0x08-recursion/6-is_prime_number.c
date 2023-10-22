#include "main.h"

/**
 * prime_number - checks if input integer is a prime number
 * @i: input
 * @j: input
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_number(int i, int j)
{
	if (i == j)
		return (1);
	else if (i % j == 0)
		return (0);
	return (prime_number(i, j + 1));
}
/**
 * is_prime_number - check for prime digits
 * @n: integer
 *
 * Return: on success 1,
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 2));
}
