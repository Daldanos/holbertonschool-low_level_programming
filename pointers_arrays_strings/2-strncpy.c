#include "main.h"
#include <stdio.h>
/**
 * _strncpy - main function
 * @dest: destination pointer
 * @src: source pointer
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
