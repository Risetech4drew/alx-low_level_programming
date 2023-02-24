#include "main.h"
/**
 * _isupper - checks for upper or lower case character
 *
 * @c: the character is to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
