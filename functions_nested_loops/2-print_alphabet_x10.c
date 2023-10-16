#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_alphabet_x10 - print alphabet
*
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
