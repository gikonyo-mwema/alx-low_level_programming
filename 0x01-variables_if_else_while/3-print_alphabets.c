#include <stdlib.h>
#include <stdio.h>

/**
 * main - lower case and upper case
 *
 * Return: Always 0 (sucesss)
 */
int main(void)
{
	char ch, d;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
