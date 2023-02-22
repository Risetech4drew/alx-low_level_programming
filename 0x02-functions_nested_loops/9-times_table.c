#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: Prints a 10x10 grid of products obtained by mutliplying the
 * numbers 0 to 9 by themselves. each product is printed as a 2-digit number
 * with leading zeros for single-digit products. The grid is seperated by
 * commas and spaces, and each row is terminated by a dollar sign followed by
 * a newline character.
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
	int j = 0;
		while (j <= 9)
		{
			int product = i * j;

			if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				int tens = product / 10;
				int digit = product % 10;

				_putchar(tens + '0');
				_putchar(digit + '0');
			}
			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			j++;
		}
		if(i != 9)
		{
		_putchar('\n');
		}
		i++;
	}
}

