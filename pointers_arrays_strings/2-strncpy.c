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
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	if (j < n)
	{
		dest[j] = '\0';
	}
	return (dest);
}
