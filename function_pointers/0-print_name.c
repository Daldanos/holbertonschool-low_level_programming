#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Main function
 * @name: pointer variable
 * @f: pointer variable
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		while (*name != '\0')
		{
			f(name);
			name++;
		}
		_putchar('\n');
	}
}
