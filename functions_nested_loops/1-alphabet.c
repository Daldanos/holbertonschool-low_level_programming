#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_alphabet - utilizes on the _putchar function
*
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
