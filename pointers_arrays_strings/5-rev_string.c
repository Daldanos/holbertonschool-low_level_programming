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
	int count;
	int var = 0;
	int temp = strlen(s);
	char rev[temp];

	for (count = strlen(s) - 1; count >= 0; count--)
	{
		char rev[temp];
		rev(var) = s(count);
		var++;
	}
	for (count = 0; count < strlen(s); count++)
	{
		s(count) = rev(count);
	}
	_putchar('\n');
}
