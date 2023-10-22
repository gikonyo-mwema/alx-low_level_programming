#include "main.h"
/**
 * palindrome1 - length of string
 * @a: string
 * @j: integer
 *
 * Return: success 1
 */
int palindrome1(char *a, int j)
{
	if (*a == 0)
		return (j - 1);
	return (palindrome1(a + 1, j + 1));
}
/**
 * palindrome2 - compare string vs its reverse
 * @a: string
 * j: length
 *
 * Return: success 1
 */
int palindrome2(char *a, int j)
{
	if (*a != *(a + j))
		return (0);
	else if (*a == 0)
		return (1);
	return (palindrome2(a + 1, j - 2));
}
/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to evaluate
 *
 * Return: success 1/
 */
int is_palindrome(char *s)
{
	int j;

	j = palindrome1(s, 0);
	return (palindrome2(s, j));
}
