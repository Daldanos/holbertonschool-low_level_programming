#include "main.h"

/**
 * flip_bits - main function
 * @n: int
 * @m: int
 * Return: return
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int z;

	for (z = n ^ m; z != 0; z = z >> 1)
	{
		count += z & 1;
	}
	return (count);
}
