#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all
 * @format: types
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j;
	char *separator = "";
	print_data_t print_types[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (print_types[j].format)
		{
			if (*(print_types[j].format) == format[i])
			{
				printf("%s", separator);
				print_types[j].print_func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
