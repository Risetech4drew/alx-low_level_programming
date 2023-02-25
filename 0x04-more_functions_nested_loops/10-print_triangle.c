#include "main.h"
/**
 * print_triiangle - prints a triangle, followed by a new line
 *
 * @size: is the size of triangle
 *
 * Description: this function prints a triangle based on the the size @size
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	if (size < 0)
	{
		_putchar('\n');
		return;
	}
	i = 1;
	while (i <= size)
	{
		int j = 1;
		while (j <= i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}

