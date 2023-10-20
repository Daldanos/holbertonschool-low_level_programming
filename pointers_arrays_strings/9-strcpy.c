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
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
