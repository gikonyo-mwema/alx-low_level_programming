#include "main.h"

/**
 * find_square_Root - find square root
 * @i: first value
 * @j: second value
 *
 * Return: result
 */

int find_square_Root(int i, int j)
{
	if (i == (j * j))
		return (j);
	else if ((j * j) >= i)
		return (-1);
	else
		return (find_square_Root(i, j + 1));
}

/**
 * _sqrt_recursion - first function
 * @n: number
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (find_square_Root(n, 0));
}
