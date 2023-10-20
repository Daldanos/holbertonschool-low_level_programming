#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - main function
 * @a: pointer variable
 * @n: int var
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
		printf("\n");
	}
