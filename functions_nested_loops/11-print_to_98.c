#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * print_to_98 - prints values to 98
 * @n: int variable
 * Description: shows values to 98
 * Return: no
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
