#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string
 * Return: c
 */

char *string_toupper(char *c)
{
	int q;

	for (q = 0; c[q] != '\0'; q++)
	{
		if (c[q] > 96 && c[q] < 123)
		{
			c[q] -= 32;
		}
	}
	return (c);
}
