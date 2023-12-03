#include "main.h"

/**
 * set_bit - main function
 * @n: int
 * @index: int
 * Return: return
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
