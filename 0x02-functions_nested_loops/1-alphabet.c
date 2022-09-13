#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	char y = 'a';

	while (y <= 'z')
	{
		_putchar(y);
		y++;
	}
	_putchar('\n');

}
