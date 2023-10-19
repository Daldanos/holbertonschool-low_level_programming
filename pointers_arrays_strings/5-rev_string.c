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
	char rev, *var, *rav;

	for (rav = s; *rav != 0; rav++)
	;
	if (rav > s)
		rav--;
	for (var =s; var < rav; var++, rav--)
	{
		rev = *var;
		*var = *rav;
		*rav = rev;
}
return s;
}
