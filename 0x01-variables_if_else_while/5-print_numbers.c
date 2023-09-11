#include <stdio.h>
/**
 * main - single digiits
 *
 * Return: 0
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
