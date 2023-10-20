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
	int j = strlen(src) -1;

	while (src[i] != '\0' && i < j)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
