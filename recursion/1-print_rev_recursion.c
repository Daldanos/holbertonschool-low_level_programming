#include "main.h"
/**
 * _puts_rev_recursion - main function
 * @s: pointer variable
 * Return: none
 *
 */
void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
