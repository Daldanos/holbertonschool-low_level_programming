#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - start
*
* Description:
*
* Return: Correct output
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int END
	END = n % 10;
	if (END > 5)
		printf("Last digit of %d", n, " is %d and is greater than 5\n", END);
	else if (END < 5 && END > 0)
		printf("Last digit of %d", n, " is %d and is less than 6 and not 0\n", END);
	else
		printf("Last digit of %d", n, "is %d and is 0\n", END);
	return (0);
}
