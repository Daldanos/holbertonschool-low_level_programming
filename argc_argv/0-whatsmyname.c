#include "main.h"
#include <stdio.h>
/**
 * main - main
 * @argc: int
 * @argv: char
 * Return: return
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		_puts(argv[0]);
		return (0);
	}
	else
	{
		_puts("Can't define the program name.");
		return (1);
	}
}
/**
 * _puts - function
 * @s: char
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
