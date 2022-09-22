#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int e;
	int f;

	for (e = 0; e < (n / 2); e++)
	{
		f = a[e];
		a[e] = a[n - e - 1];
		a[n - e - 1] = f;
	}
}
