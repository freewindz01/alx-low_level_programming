/**
 *main - main block
 *Description: Print all possible different combinations of 3 digits.
 *Numbers must be separated by commas and a space.
 *The 3 digits must be different.
 *012, 120, 102, 021, 201, 210 are considered the same combination.
 *print only the smallest combination of 3 digits.
 *Numbers should be printed in ascending order.
 *You can only use `putchar` to print to console.
 *You can only use `putchar` up to 6 times.
 *You are not allowed to use any variables of type `char`.
 *Return: 0
 */
int main(void)
{
	int i = 0, j;
	
	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (j != i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				
				if (i != 98 || j != 98)
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
