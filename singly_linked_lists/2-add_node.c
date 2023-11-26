#include "lists.h"
/**
 * add_node - main function
 * @head: pointer
 * @str: string
 * Return: first or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (!first)
		return (NULL);

	first->str = strdup(str);

	if (!first->str)
	{
		free(first);
		return (NULL);
	}
	first->len = strlen(str);
	first->next = *head;
	*head = first;

	return (first);
}
