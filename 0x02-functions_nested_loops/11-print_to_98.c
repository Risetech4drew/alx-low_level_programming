#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line
 *
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
        while (n != 98)
        {
                if (n > 98)
                {
                        if (n < 100)
                        {
                                _putchar(' ');
                                if (n < 10)
                                {
                                        _putchar(' ');
                                }
                        }
                        else
                        {
                                _putchar(n / 100 % 10 + '0');
                        }
                        _putchar(n / 10 % 10 + '0');
                        _putchar(n % 10 + '0');
                        _putchar(',');
                        _putchar(' ');
                        n--;
                }
                else
                {
                        if (n < 100)
                        {
                                _putchar(' ');
                                if (n < 10)
                                {
                                        _putchar(' ');
                                }
                        }
                        else
                        {
                                _putchar(n / 100 % 10 + '0');
                        }
                        _putchar(n / 10 % 10 + '0');
                        _putchar(n % 10 + '0');
                        if (n != 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                        n++;
                }
        }
        _putchar('9');
        _putchar('8');
        _putchar('\n');
}
