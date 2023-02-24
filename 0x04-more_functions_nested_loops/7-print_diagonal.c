#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the termianl
 *
 * @n: numbers of times the the character \"\" should be printed
 *
 * Description: This function prints a diagonal line in the terminal 'n',
 * number of times
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
		_putchar(' ');
		j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
