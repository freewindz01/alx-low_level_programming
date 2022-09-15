#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
	int e, f;

	e = 0;

	while (n > 0)
	{
		f = e;
		while (f > 0)
		{
			_putchar(' ');
			f--;
		}
		_putchar('\\');
		_putchar('\n');
		e++;
		n--;
	}
	if (e < 1)
		_putchar('\n');
}
