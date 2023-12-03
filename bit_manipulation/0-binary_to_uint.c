#include "main.h"

/**
 * binary_to_uint - main function
 * @b: string
 * Return: return
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int power = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
			result += power;

		power *= 2;
		i--;
	}
	return (result);
}
