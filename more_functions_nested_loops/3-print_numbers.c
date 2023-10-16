#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_numbers - prints 0 to 9
* _putchar: shows the number
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');

	_putchar('\n');
}
