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
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(op)(n1, n2);
	printf("%d\n", result);

	return (0);
}
