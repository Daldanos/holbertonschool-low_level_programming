#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_diagonal - print diagonal
* @n: int variable
*/
void print_diagonal(int n)
{
	int i, x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
