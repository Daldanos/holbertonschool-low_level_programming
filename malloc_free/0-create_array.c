#include "main.h"
#include <stdlib.h>

/**
 * create_array - main
 * @size: int
 * @c: unsigned int
 * Return: ar
 */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (ar == NULL)
		return (NULL);

	while (size--)
		ar[size] = c;
	return (ar);
}
