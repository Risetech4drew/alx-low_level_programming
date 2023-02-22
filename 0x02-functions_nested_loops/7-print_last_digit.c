#include "main.h"
/**
 * int print_last_digit - prints last digit of a number to the console
 *
 * @n: locate the last digit of an integer
 *
 * Return: the last digit of the input integer
 *
 * Description: function gets the input as integer and returns last digit,
 * if the input is negative, the fuction returns the absolute value of last digit
 *
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
