#include "lists.h"

/**
 * delete_dnodeint_at_index - main function
 * @head: pointer
 * @index: unsigned int
 * Return: return
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (index == 0)
	{
		if (*head == NULL)
		{
			return (-1);
		}
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);

	current->prev->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
