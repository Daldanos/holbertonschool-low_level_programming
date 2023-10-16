#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* _isdigit - checks for uppercase
* @c: digit
* Return: 1 if digit (0 to 9), 0 if not
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
