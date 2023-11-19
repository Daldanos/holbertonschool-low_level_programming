#include "3-calc.h"


/**
 * main - main
 * @argc: int
 * @argv: array
 * Return: 0, 98, 99 or 100
 */

int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	oper = get_op_func(argv[2]);

	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = oper(n1, n2);
	printf("%d\n", result);

	return (0);
}
