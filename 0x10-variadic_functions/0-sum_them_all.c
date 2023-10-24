#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments
 * @n: NUmber of args
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, j;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (j = 0; j < n; j++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
