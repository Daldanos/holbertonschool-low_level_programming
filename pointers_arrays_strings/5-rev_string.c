#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - main function
 * @s: pointer variable
 *
 */
void rev_string(char *s)
{
	int count, countb;
	char rev;
	int temp = strlen(s);
	
	while (count = 0; count < temp -1; count++)
	{
		rev = s[count];
		_putchar(rev);
	}
	_putchar('\n');

	while (count = strlen(s) - 1; count >= 0; count--)
	{
		rev = s[count];
		_putchar(rev);
	}
}
