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
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == ',' ||
			str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' ||
			str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' ||
			str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}')
		{
			str[i] -= 32;
		}

	}
	j++;
	return (str);
}
