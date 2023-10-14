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

	for (PRUEBA = 48; PRUEBA <= 57; PRUEBA++)
	{
		putchar(PRUEBA);
		if (PRUEBA < 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
