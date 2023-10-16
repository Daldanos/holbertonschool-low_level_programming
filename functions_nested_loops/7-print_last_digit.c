#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_last_digit - what the name says
* @i: int variable
* Return: last digit
*/
int print_last_digit(int i)
{
	int last;

	if (i > 0)
		last = i % 10;
	else
		last = (i % 10) * -1;

	_putchar(last + '0');
	return (last);
}
