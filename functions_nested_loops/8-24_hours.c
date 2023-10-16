#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* jack_bauer - shows al the variables of a clock
* @h @m: int variable
i*
*/
void jack_bauer(void)
{
	int h, m;

	h = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
