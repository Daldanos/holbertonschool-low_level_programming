#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - main function
 * @a: pointer variable
 * @size: int
 * Return: none
 *
 */
void print_diagsums(int *a, int size)
{
	int i, sumj, sumk;

	sumj = sumk = 0;

	for (i = 0; i < (size * size); i += size + 1)
		sumj += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sumk += a[i];
	printf("%d, %d\n", sumj, sumk);
}
