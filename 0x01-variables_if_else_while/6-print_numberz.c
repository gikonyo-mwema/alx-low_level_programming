#include <stdio.h>

/**
 * main - Entry point
 * description - single digit
 *
 * Return: 0
 */
int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		putchar(48 + ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
