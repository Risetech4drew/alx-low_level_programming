#include "main.h"
/**
 * print_numbers - prints number from 0 to 9
 *
 * Description: this function when called prints number from 0 to 9,
 * followed by a new line
 *
 * Return: numbers 0 to 9 and newline
 */
void print_numbers(void)
{
	int i = 0;
	
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
