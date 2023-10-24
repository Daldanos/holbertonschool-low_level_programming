#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - main function
 * @s: pointer variable
 * Return: a
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
		break;
	}
	s++
	}
	while (*s >= '0' && *s <= '9')
	{
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			if (sign == 1)
			{
				return INT_MAX;
			}
			else
			{
				return INT_MIN;
			}
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return result * sign;
}
