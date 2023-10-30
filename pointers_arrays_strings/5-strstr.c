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
	int i;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
