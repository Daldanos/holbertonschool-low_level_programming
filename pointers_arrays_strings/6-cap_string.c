#include "main.h"
#include <stdio.h>
/**
 * cap_string - main function
 * @str:string variable
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			continue;
		}
		if (str[i] == ' ' || str[i] == ',' || str[i] == ';' ||
			str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == '(' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}')
		{
		++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			continue;
		}

		}
	}
	return (str);
}
