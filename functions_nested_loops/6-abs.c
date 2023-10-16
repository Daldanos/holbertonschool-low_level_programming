#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* _abs - absolute value
* @r: int variable
* Return: r if positive, r * -1 if negative
*/
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * (-1));
}
