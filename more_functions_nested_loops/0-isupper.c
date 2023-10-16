#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* _isupper - checks for uppercase
* @c: char
* Return: 1 if uppercase, 0 if not
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
