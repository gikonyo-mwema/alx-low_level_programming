#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string
 * @n: arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list list;
	char *temp;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (j = 0; j < n - 1; j++)
	{
		temp = va_arg(list, char *);
		if (temp)
			printf("%s", temp);
		else
			printf("(nil)");
		if (separator)
			printf("%s", separator);
	}
	temp = va_arg(list, char *);
	if (temp)
		printf("%s\n", temp);
	else
		printf("(nil)\n");
	va_end(list);
}
