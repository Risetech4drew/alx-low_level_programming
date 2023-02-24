#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times character '_' should be printed
 *
 * Description: This function drawa the a straight line if n is greater than 0,
 * else prints a new line
 *
 * Return: straight line if n is greater than 0 in the terminal
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
