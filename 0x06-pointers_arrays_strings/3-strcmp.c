#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Description: this function compares two strings, returns -15,
 * if they are not eqaul and 15 otherwise
 *if s1 and s2 have not reached the end, we set flag variable to 1,
 * indicating that they are not equal and 0 otherwise
 *
 * Return: -15 , 15, 1, 0
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			flag = (*s1 > *s2) ? 1 : -1;
			break;
		}
		s1++;
		s2++;
	}
	if (*s1 != '\0' || *s2 != '\0')
	{
		if (flag < 0)
		{
			return (-15);
		}
		else
		{
			return (15);
		}
	}
	else
	{
		if (flag == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
