#include "main.h"
/**
 * _strchr - main function
 * @s: pointer variable
 * @c: char
 * Return: s
 *
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
