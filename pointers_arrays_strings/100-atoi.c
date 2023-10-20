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
	int a;
	int lar;
	int result;
	lar = strlen(s);

	for (a = 0; a < lar; a++)
	{
		result = result * 10 + (s[a] - '0');
	}
	return (result);
}
