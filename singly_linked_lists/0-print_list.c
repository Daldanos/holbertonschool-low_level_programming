#include "lists.h"

/**
 * print_list - prints list
 * @h: variable
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (*h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%s", h->str);
		}
		if (h->next == NULL)
		{
			printf(" ");
		}

		count++;
		h = h->next;
	}
	return (count);
}
