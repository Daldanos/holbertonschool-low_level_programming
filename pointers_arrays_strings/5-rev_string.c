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
	char a, *b, *c;

	for (c = s; *c != 0; c++)
	;
	if (c > s)
		c--;
	for (b = s; b < c; b++, c--)
	{
		a = *b;
		*b = *c;
		*c = a;
}
return s;
}
