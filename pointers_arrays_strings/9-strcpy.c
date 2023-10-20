#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - main function
 * @dest:pointer variable
 * @src: pointer variable
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
