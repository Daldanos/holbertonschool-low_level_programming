#include "main.h"
/**
 * _strstr - main function
 * @haystack: pointer variable
 * @needle: char
 * Return: start
 *
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *start = haystack;

			needle++;
			while (*needle != '\0' && *haystack == *needle)
			{
				haystack++;
				needle++;
			}
			if (*needle == '\0')
			{
				return (start);
			}
		}
		haystack++;
	}
	return (NULL);
}
