#include "main.h"
#define NULL 0
/**
 * _strchr - locates character in a string
 *
 * @s: pointer to string
 * @c: the character to be located
 *
 * Description - this function returns a pointer to the first occurrence,
 * of the character c in the string s or NULL if the character is not found
 *
 * Return: string or NULL
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
	return (NULL);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
