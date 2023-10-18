#include "main.h"
#include <stdio.h>

/**
 * _strlen - main function
 * @s: pointer variable
 * Return: str length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
