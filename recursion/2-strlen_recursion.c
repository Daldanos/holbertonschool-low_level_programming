#include "main.h"
/**
 * _strlen_recursion - main function
 * @s: pointer variable
 * Return: none
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\0');
	}
	return (1 + _strlen_recursion(s + 1));
}
