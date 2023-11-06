#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 * Return: Pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int tot, i;

	tot = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(tot);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < tot; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
