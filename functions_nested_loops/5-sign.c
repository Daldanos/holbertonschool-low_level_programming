#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_sign - checks sign
* @n: int variable
* Return: 1 if positive, -1 negative, 0 if 0
*/
int int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if
	{
		(n < 0)
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
