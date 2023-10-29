#include "main.h"
/**
 * _memset - main function
 * @s: pointer variable
 * @b: char
 * @n: int
 * Return: s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
