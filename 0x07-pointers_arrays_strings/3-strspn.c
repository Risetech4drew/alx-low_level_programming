#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string to be searched
 * @accept: the characters to accept
 *
 * Description - this function Returns the number of bytes,
 * in the initial segment of s,
 * which consist only of bytes from accept.
 *
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (i);
}
