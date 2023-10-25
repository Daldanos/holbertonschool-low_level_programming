#include "main.h"
#include <stdio.h>
/**
 * reverse_array - main function
 * @a:pointer variable
 * @n: int variable
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n--)
	{
		j = a[i];
		a[i++] = a[n];
		a[n] = j;
	}
}
