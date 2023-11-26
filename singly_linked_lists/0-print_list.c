#include "lists.h"

/**
 * print_list - prints list
 * @h: variable
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		if (h->next)
		{
			printf(" ");
		}

		count++;
		h = h->next;
	}
	return (count);
}
