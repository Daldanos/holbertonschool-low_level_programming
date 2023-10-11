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
	int VARINT;
	char VARCHAR;
	float VARFLOAT;
	double VARDOUBLE;

	printf("Size of int is: %ld\n", sizeof(VARINT));
	printf("Size of char is: %ld\n", sizeof(VARCHAR));
	printf("Size of float is: %ld\n", sizeof(VARFLOAT));
	printf("Size of double is: %ld\n", sizeof(VARDOUBLE));

	return (0);
}
