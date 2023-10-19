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
	
	for (count = strlen(s) - 1; count > 0; count--)
	{
		rev = s[count];
		s[len - count - 1] = temp;
		_putchar(rev)
	}	
	_putchar('\n');
}
