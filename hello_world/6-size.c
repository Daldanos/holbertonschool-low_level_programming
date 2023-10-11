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
	
	printf("Size of char: %ld byte(s)\n", sizeof(VARCHAR));
	printf("Size of int: %ld byte(s)\n", sizeof(VARINT));
	printf("Size of long int: %ld byte(s)\n", sizeof(VARLONGINT));
	printf("Size of float: %ld byte(s)\n", sizeof(VARFLOAT));
	printf("Size of double: %ld byte(s)\n", sizeof(VARDOUBLE));

	return (0);
}
