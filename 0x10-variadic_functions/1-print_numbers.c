#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of variadic args
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list list;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == 0)
		separator = "";

	va_start(list, n);
	for (j = 0; j < n - 1; j++)
		printf("%d%s", va_arg(list, int), separator);
	printf("%d\n", va_arg(list, int));

	va_end(list);
}
