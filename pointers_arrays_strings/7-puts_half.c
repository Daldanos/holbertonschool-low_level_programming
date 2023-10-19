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

	if (a % 2 != 0)
	{
		while(str[d] != '\0')
		{
			printf("%c", str[d]);
			d++;
		}
	}
	else
	{
		while(str[c] != '\0')
		{
			printf("%c", str[c]);
			c++;
		}
	}
}
