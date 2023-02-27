#include "main.h"
/**
 * _strlen - Returns the length of a string
 *
 * @s: the string to measure the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
