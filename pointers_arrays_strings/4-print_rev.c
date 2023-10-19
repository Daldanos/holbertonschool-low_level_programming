#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - main function
 * @str: pointer variable
 *
 */
void print_rev(char *s)
{
	int count;
	char rev;
	
	for (count = strlen(s); count > 0; count--)
	{
		rev = s[count];
		_putchar(rev);
	}	
	_putchar('\n');
}
