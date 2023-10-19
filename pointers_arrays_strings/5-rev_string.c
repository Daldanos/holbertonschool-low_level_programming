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
	{
		int count;
		char rev;
		int temp = strlen(s);

	for (count = 0; count < temp - 1; count++)
	{
		rev = s[count];
		_putchar(rev);
	}
	_putchar('\n');
	}

	{
		int countb;
		char rev2;

	for (countb = strlen(s) - 1; countb >= 0; countb--)
	{
		rev2 = s[countb];
		_putchar(rev2);
	}
	}
}
