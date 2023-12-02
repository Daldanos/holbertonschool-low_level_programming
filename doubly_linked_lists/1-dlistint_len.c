#include "lists.h"

/**
 * dlistint_len - main function
 * @h: pointer
 * Return: cont
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		cont++;
		temp = temp->next;
	}
	return (cont);
}
