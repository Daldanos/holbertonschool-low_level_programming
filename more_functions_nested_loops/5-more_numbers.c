#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* more_numbers - prints 0 to 14 ten times
*/
void more_numbers(void)
{
	int i, x;

	x = 0;

	while (x < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar(i % 10 + '0');

		}
			_putchar('\n');
			x++;
	}
}
