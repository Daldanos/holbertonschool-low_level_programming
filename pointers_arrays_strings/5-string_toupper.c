#include "main.h"
#include <stdio.h>
/**
 * string_toupper - main function
 * @str:pointer variable
 * Return: none
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	retunr (str);
}
