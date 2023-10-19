#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - main function
 * @str: pointer variable
 *
 */
void puts_half(char *str)
{
	int count, a, b, c, d;
	char rev;

	a = strlen(str);
	b = strlen(str) - 1;
	c = a / 2;
	d = b / 2;

	if (a % '2' == 0)
	{
		for (count = c; count < a; count++)
	{
		rev = str[count];
		_putchar(rev);
	}
	}
	else
		if (a % '2' != 0)
		{
		for (count = d; count < a; count++)

		rev = str[count];
		_putchar(rev);
	}
}
