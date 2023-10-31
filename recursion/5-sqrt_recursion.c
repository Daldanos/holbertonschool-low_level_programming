#include "main.h"
/**
 * _sqrt_recursion - function
 * @n: int
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		int mid = n / 2;
		int low = 0;
		int high = n;

		while (low <= high)
		{
			mid = (low + high) / 2;
			if (mid * mid == n)
			{
				return (mid);
			}
			else if (mid * mid < n)
			{
				low = mid + 1;
			}
			else
			{
				high = mid;
			}
		}
		return (-1);
	}
}
