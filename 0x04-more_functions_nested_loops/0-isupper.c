#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 *
 * @c: the character is to be checked
 *
 * Desription: the function returns 1 if character is uppercase else returns,
 * return 0
 *
 * Return: 1 if the character is uppercase, 0 otherwise
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
