#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* _isalpha - checks if is char
* @c: char variable
* Return: 1 if char, 0 if not
*/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 &&  c < 123))
		return (1);
	else
		return (0);
}
