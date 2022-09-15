#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9, excluding 2 and 4.
 * Description: Can only use _putchar twice.
 */
void print_most_numbers(void)
{
	int q;

	q = 0;
	while (q < 10)
	{
		if (q != 2 && q != 4)
			_putchar(q + '0');

		q++;
	}
	_putchar('\n');
}
