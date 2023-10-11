#include <stdio.h>
/**
* main - start
*
* Description:
*
* Return: Correct output
*/
int main(void)
{
	char VARCHAR;
	int VARINT;
	long int VARLONGINT;
	float VARFLOAT;
	double VARDOUBLE;

	printf("Size of a char: %ld byte(s)\n", sizeof(VARCHAR));
	printf("Size of an int: %ld byte(s)\n", sizeof(VARINT));
	printf("Size of a long int: %ld byte(s)\n", sizeof(VARLONGINT));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(VARDOUBLE));
	printf("Size of a float: %ld byte(s)\n", sizeof(VARFLOAT));

	return (0);
}
