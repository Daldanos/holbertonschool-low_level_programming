#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - main function
 * @str: pointer variable
 *
 */
void print_rev(char *s)
{
	int count, len, temp;

	for (count = 0; count < len / 2; count++)
	{
		temp = s[count];
		s[count] = s[len - count - 1];
		s[len - count - 1] = temp;
		_putchar(s)
	}	
	_putchar('\n');
}
