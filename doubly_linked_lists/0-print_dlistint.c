#include "lists.h"

/**
 * print_dlistint - main function
 * @h: pointer
 * Return: cont
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		cont++;
		temp = temp->next;
	}
	return (cont);
}
