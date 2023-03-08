#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to a string to return its length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
