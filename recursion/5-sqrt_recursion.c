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
		return (_sqrt_recursion_helper(n, 1));
	}
}
/**
 * _sqrt_recursion_helper - helper function
 * @n: int
 * @i: int
 * Return: sqrt
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_recursion_helper(n, i + 1));
	}
}
