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
	int i = 0;
	int j;
	char *p;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
