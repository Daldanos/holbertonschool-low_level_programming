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
	int i = 0;
	int j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = j; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
