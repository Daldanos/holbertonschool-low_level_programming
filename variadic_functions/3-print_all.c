#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all
 * @format: types
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s, *t = "(nil)";


	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
					t = s;
				printf("%s", t);
				break;
			default:
				i++;
				continue;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
				format[i] == 's') && format[i + 1] != '\0')
			printf(", ");


		i++;
	}
	va_end(args);
	printf("\n");
}
