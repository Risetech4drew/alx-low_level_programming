#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Description: This function prints the numbers from 0 to 14,
 * followed by a new line. each number printed using _putchar
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 11)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
	_putchar('\n');
	i++;
	}
}
