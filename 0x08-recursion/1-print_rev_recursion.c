#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: a pointer to a string to be printed in reverse
 *
 * Return: string printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
