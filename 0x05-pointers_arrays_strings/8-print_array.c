#include "main.h"
/**
 * print_array - prints n elements of an array of integers followed by a newline
 *
 * @n: is the number of elements to be printed
 *
 * Description: this functiion prints n elements of an array of integers,
 * followed by a newline.
 * R
 * Return: n number of elements of an array
 */
void print_array(int *a, int n)
{
	int i = 0;
	int nums = 0;
	int tmp = digit;

	while (i < n)
	{
		int digit = a[i];

		if (digit < 0)
		{
			_putchar('-');
			digit = -digit;
		}

		while (tmp > 0)
		{
			nums++;
			tmp/= 10;
		}
		if (digit == 0)
		{
			_putchar('0');
		}
		while (digit > 0) 
		{
			int number = digit % 10;
			_putchar(number + '0');
			digit /= 10;
		}
		}
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');

}
