#include "lists.h"

/**
 * get_dnodeint_at_index - main function
 * @head: pointer
 * @index: int
 * Return: current
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int cont = 0;

	while (current != NULL)
	{
		if (cont == index)
		{
			return (current);
		}
		cont++;
		current = current->next;
	}
	return (NULL);
}
