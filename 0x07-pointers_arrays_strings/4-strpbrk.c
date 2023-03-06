#include "main.h"
#define NULL 0
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: a pointer to the byte in s that matches one of,
 * the bytes in accep, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*s == *ptr)
				return (s);
			ptr++;
		}
		s++;
	}
	return (NULL);
}
