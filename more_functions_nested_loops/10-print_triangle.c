#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_triangle - print triangle
* @size: int variable
*/
void print_triangle(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (x = 1; x <= size; x++)
			{
				if (x <= (size - i))
					_putchar(' ');
				else
					_putchar('#');
			}

		_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
