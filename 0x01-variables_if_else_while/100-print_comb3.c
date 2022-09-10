#include <stdio.h>
/**
 *main - main block
 *Description: Print all possible combinations of two digits.
 *Numbers must be separated by commas and a space.
 *01 and 10 are considered as the same combination of the two digits.
 *Print only the smallest combination of two digits.
 *Numbers should be printed in ascending order, with two digits.
 *You can only use `putchar`.
 *You can only use `putchar` up to 5 times.
 *You are not allowed to use any variable of type `char`.
 *Return: 0
 */
int main(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (i != j && i < j)
			{
				putchar(i + 48);	
				putchar(j + 48);
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++j;
		}
		++i;
	}
	putchar('\n');

	return (0);
}
