#include "main.h"
/**
 * _isdigit - checks is character is a digit or not.
 *
 * @c: character to be checked
 *
 * Description: this function checks for digit 0 through 9
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
