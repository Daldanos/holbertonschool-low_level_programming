#include "3-calc.h"

/**
 * op_add - add function
 * @a: int
 * @b: int
 * Return: a plus b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - minus function
 * @a: int
 * @b: int
 * Return: a minus b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mult function
 * @a: int
 * @b: int
 * Return: a mult b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div function
 * @a: int
 * @b: int
 * Return: a div b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod function
 * @a: int
 * @b: int
 * Return: a mod b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
