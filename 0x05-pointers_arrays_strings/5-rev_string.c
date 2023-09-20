#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0, b = 0, length;
	char temp;

	length = 0;


	for (a = 0; *(s + a) != '\0'; a++)
	{
		length++;
	}

	if (length % 2 != 0)
	{
		for (b = (length - 1); b > (length / 2); b--)
		{
			temp = *(s + b);
			*(s + b) = *(s + ((length - 1) - b));
			*(s + ((length - 1) - b)) = temp;
		}
	}
	else
	{
		for (b = (length - 1); b >= (length / 2); b--)
		{
			temp = *(s + b);
			*(s + b) = *(s + ((length - 1) - b));
			*(s + ((length - 1) - b)) = temp;
		}
	}
}
