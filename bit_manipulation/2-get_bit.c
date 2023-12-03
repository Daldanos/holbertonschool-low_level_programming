#include "main.h"

/**
 * get_bit - main function
 * @n: int
 * @index: int
 * Return: return
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
