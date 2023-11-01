#include "main.h"

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
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_prime_number(n - 1);
}
