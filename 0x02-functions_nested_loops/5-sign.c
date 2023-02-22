#include "main.h"
/**
 * print_sign() - prints the sign of the number
 *
 * @c: the number to be checked
 *
 * Returns 1 andprints '+' if 'n' is greater than zero
 *
 * Returns 0 and prints 0 if 'n' is zero
 *
 * Returns "-1" and prints '-' if n is less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
