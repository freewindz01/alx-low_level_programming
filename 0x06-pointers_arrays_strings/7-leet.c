#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i = 0, j, k = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;
		while (j < k)
		{
			if (s[i] == tr[j] || s[i] - 32 == tr[j])
				s[i] = trw[j];
			j++;
		}
		i++;
	}

	return (s);
}
