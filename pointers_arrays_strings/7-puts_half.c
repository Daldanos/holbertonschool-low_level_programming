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
	int count, a, b;
	char rev;

	a = strlen(str);
	b = strlen(str) - 1;

	if (a % '2' == 0)
	{
		for (count = a / '2'; count < a; count++)
	{
		rev = str[count];
		_putchar(rev);
	}
	}
	else
		if (a % '2' != 0)
		{
		for (count = b / '2'; count < a; count++)

		rev = str[count];
		_putchar(rev);
	}
}
