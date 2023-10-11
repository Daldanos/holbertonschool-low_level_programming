#include <stdlib.h>
#include <time.h>
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
	int PRUEBA;

	for (PRUEBA = 0; PRUEBA <= 9; PRUEBA++)
		putchar('0' + PRUEBA);
	for (PRUEBA = 97; PRUEBA <= 102; PRUEBA++)
		putchar((char)PRUEBA);
	putchar('\n');
	return (0);
}
