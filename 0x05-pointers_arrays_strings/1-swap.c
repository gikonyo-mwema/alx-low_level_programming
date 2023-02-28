#include <stdio.h>

/**
* swap_int - swaps the value
* @a: integer 1
* @b: integer 2
*
* Return: zero
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
