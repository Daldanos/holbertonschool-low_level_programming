#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* times_table - shows tables from 0 to 9
* @a @b @r: int variable
*
*/
void times_table(void)
{
	int a, b, r;

	a = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			r = a * b;

			if (r > 9)
			{
				_putchar((r / 10) + '0');
				_putchar((h % 10) + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar(r + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				+putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
