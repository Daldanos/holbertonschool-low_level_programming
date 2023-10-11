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

	for (PRUEBA = 97; PRUEBA <= 122; PRUEBA++)
	{
		if (PRUEBA != 101 && PRUEBA != 113)
		putchar((char)PRUEBA);
	}
	putchar('\n');
	return (0);
}
