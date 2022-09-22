#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: string
 * @s2: string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int q;

	for (q = 0; s1[q] != '\0' || s2[q] != '\0'; q++)
	{
		if (s1[q] != s2[q])
			return (s1[q] - s2[q]);
	}
	return (0);
}
