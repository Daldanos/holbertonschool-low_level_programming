#include "main.h"
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
	char c[] = "_putchar";
	int a = 0;

	while (c[a] != '\0')
	{
		_putchar(c[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
