#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "variadic_functions.h"

/**
 * print_all - print all
 *
 * @format - format
 *
 */
void print_all(const char * const format, ...)
{
	va_list args_list;
	 char *current_str;
	 int i;

	 i = 0;
	 va_start(args_list, format);
	 while (format != NULL && format[i] != '\0')
	 {
		 switch (format[i])
		 {
			 case 'i':
				 printf("%i", va_arg(args_list, int));
				 break;
			 case 'f':
				 printf("%f", va_arg(args_list, double));
				 break;
			 case 'c':
				 printf("%c", (char) va_arg(args_list, int));
				 break;
			 case 's':
				 current_str = va_arg(args_list, char *);
				 if (current_str == NULL)
				 {
					 printf("(nil)");
					 break;
				 }
				 printf("%s", current_str);
				 break;
		 }
		 if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					 format[i] == 's') && format[(i + 1)] != '\0')
			 printf(", ");
		 i++;
	 }
	 printf("\n");
	 va_end(args_list);
}
