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
	int a, c, d;

	a = strlen(str);
	c = a / 2;
	d = c + 1;

	if (a % 2 != 0)
	{
		while (str[d] != '\0')
		{
			printf("%c", str[d]);
			d++;
		}
	}
	else
	{
		while (str[c] != '\0')
		{
			printf("%c", str[c]);
			c++;
		}
	}
	printf("\n");
}
