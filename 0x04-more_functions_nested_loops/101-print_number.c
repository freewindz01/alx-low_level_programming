#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	long x; /* power of 10 */
	int y; /* boolean check */
	long num; /* convert int to long */

	num = n;
	/* negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* count up */
	x = 1;
	y = 1;
	while (y)
	{
		if (num / (x * 10) > 0)
			x *= 10;
		else
			y = 0;
	}

	/* count down */
	while (num >= 0)
	{
		if (x == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / x % 10) + '0');
			x /= 10;
		}
	}
}
