#include "main.h"
/**
 * _strpbrk - main function
 * @s: pointer variable
 * @accept: char
 * Return: s
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (*p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
