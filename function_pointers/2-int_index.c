#include "function_pointers.h"

/**
 * int_index - main function
 * @array: pointer
 * @size: int size
 * @cmp: compare
 * Return: -1 or i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
