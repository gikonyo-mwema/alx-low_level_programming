#include <stdio.h>
/**
 * main  - The largest prime factor of the number 612852475143
 *
 * Return: 0 success
 */
int main(void)
{
	long int no, index;

	no = 612852475143;
	for (index = 2; index <= no; index++)
	{
		if (no % index == 0)
		{
			no /= index;
			index--;
		}
	}
	printf("%ld\n", index);
	return (0);
}
