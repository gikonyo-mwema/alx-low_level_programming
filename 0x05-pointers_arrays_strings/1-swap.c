#include "main.h"
/**
 * swap_int - swaps the values of two intergers
 * @a: first int
 * @b: second int
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int index;

	index = *a;

	*a = *b;
	*b = index;
}
