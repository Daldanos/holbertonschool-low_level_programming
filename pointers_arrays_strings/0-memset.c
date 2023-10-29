#include "main.h"
#include <stdio.h>
/**
 * _memset - main function
 * @s: pointer variable
 * @b: char
 * @n: int
 * Return: str
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
