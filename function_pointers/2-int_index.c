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
	if (array == NULL || size <= 0)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
