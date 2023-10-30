#include "main.h"
/**
 * _strspn - main function
 * @s: pointer variable
 * @accept: char
 * Return: i
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		for (char *p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				i++;
				break;
			}
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}
	return (i);
}
