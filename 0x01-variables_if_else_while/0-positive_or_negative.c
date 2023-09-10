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
	srand(time(0));

	int n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("is positive:%d\n", n);
	else if (n < 0)
		printf("is negative: %d\n", n);
	else
		printf("is zero: %d\n", n);
	return (0);
}
