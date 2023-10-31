/**
 * _sqrt_recursion - function
 * @n: int
 * Return: 1 or -1
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
		int i;

		for (i = 1; i <= n / 2; i++)
		{
			if (i * i == n)
			{
				return (i);
			}
			else if (i * i > n)
			{
				return (i - 1);
			}
		}
		return (-1);
	}
}
