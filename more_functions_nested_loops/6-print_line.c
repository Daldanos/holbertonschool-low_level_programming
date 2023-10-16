#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_line - print line
* @n: int
*/
void print_line(int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
