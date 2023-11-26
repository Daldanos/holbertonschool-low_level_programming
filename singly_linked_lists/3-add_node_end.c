#include "lists.h"
/**
 * add_node_end - main function
 * @head: pointer
 * @str: string
 * Return: last or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (!last)
		return (NULL);

	last->str = strdup(str);

	if (!last->str)
	{
		free(last);
		return (NULL);
	}
	last->len = strlen(str);
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last;
	}
	return (last);
}
