#include <stdio.h>
/**
 * main - main
 * @str: char
 * Return: return
 */
void print_string(char *str);

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print_string(argv[i]);
	}
	return (0);
}
/**
 * print_string - function
 * @str: char
 */
void print_string(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
