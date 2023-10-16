#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* _islower - checks lowercase
* @c: char variable
* Return: 1 if lowercase, 0 if not
*/
int _islower(int c)
{
	if (c > 96 &&  c < 123)
		return (1);
	else
		return (0);
}
