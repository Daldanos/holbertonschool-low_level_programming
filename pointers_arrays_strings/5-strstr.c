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
	int i = 1;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *start = haystack + 1;

			needle++;

			while (*needle != '\0' && *haystack == *needle)
			{
				haystack++;
				needle++;
				i++;
			}
			if (*needle == '\0')
			{
				return (start + i - 1);
			}
		}
		haystack++;
	}
	return (0);
}
