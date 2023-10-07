#include "main.h"

/**
 * is_digit - checks if a string contains only digits
 * @s: string to be evaluated
 *
 * Return: 1 if all are digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_error - prints an error message and exits
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two nos
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int ln1, ln2, ln, i, carry, digit1, digit2, *result, hasOutput = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		print_error();
	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	ln = ln1 + 1;
	result = malloc(sizeof(int) * ln);
	if (!result)
		return (1);
	for (i = 0; i <= ln1 + ln2; i++)
		result[i] = 0;
	for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
	{
		digit1 = s1[ln1] - '0';
		carry = 0;
		for (ln2 = _strlen(s2) - 1; ln2 >= 0; ln2--)
		{
			digit2 = s2[ln2] - '0';
			carry += result[ln1 + ln2 + i] + (digit1 * digit2);
			result[ln1 + ln2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[ln1 + ln2 + i] += carry;
	}
	for (i = 0; i < ln - 1; i++)
	{
		if (result[i])
			hasOutput = 1;
		if (hasOutput)
			putchar(result[i] + '0');
	}
	if (!hasOutput)
		putchar('0');
	putchar('\n');
	free(result);
	return (0);
}
