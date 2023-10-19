#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - main function
 * @str: pointer variable
 *
 */
void puts2(char *str)
{
	int count;
	char rev;
	int t = strlen(str) - 1;

	while (count < t)
	for (count = 0; t >= count; count += 2)
	{
		rev = str[count];
		_putchar(rev);
	}
	_putchar('\n');
}
