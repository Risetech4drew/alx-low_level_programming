#include "main.h"
/**
 * _isdigit - checks is character is a digit or not.
 *
 * @c: character to be checked
 *
 * Description: this function checks for digit 0 through 9
 *
 * Returns: 1 if charcter is digit and 0 if charcter is not a digit
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
