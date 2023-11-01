#include "main.h"
/**
 * is_divisible - checks
 * @n: int
 * @div: int
 * Return: 1 or 0
 */
int is_divisible(int n, int div)
{
	if (div == n)
		return (0);

	if (n % div == 0 && div != 1)
		return (1);

	return (is_divisible(n, div + 1));
}

/**
 * is_prime_number - function
 * @n: int
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_divisible(n, 2) == 0);
}
