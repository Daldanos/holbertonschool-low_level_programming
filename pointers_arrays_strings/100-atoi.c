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
	unsigned int result = 0;
	char c = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			c = 1;
			result = result * 10 + *s - '0';
		}

		else if (c)
			break;
		s++;
	}

	if (sign < 0)
		result = (-result);

	return (result);
}
