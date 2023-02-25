#include "main.h"
/**
 * print_square - prints a square followed by  a new line
 *
 * @size: is the size of the square
 *
 * Description: This function prints a square, give "size"
 *
 * Return: void
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
		_putchar('#');
		j++;
		}

		_putchar('\n');
		i++;
	}
}
