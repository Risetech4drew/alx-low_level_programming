#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to be reversed
 *
 * Description: this function gets the string @s and reverss it and prints,
 * the reversed string
 *
 * Return: reversed string
 */
void print_rev(char *s)
{
	char *p = s;

	/*moves the pointer at the end of the string*/
	while (*p != '\0')
	{
		p++;
	}

	/*printing in reverse order*/
	while (p > s)
	{
		p--;
		_putchar(*p);
	}
	_putchar('\n');
}
