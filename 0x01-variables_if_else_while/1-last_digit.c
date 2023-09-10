#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	last = n % 10;

	if (last > 5)
	{
		printf("%d and is greater than 5\n", last);
	}
	else if (last == 0)
		printf("%d and is 0\n", last);
	return (0);
}
