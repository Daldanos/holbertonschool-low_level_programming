#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: Pointer to duplicate string
 */
char *_strdup(const char *str)
{
	if (str == NULL)
		return (NULL);
	
	unsigned int len = 0;
	char *dup;
	
	while (str[len] != '\0')
		len++;
	
	dup = (char *)malloc((len + 1) * sizeof(char));
	
	if (dup == NULL)
		return (NULL);
	
	for (unsigned int i = 0; i < len; i++)
		dup[i] = str[i];
	
	duplicate[len] = '\0';
	
	return (dup);
}
