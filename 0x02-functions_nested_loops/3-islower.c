#include "main.h"
/**
 * _islower() - checks for lowercase characters
 *
 * Description: Returns 1 if c is lowercase and Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
