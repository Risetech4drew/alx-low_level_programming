#include "main.h"
/**
 *string_toupper - changes all lowecase letters to uppercase
 *
 * @str: string containing lowercase characters
 *
 * Description: this function checks for uppercase character in a string,
 * if found the characters are changed to uppercase
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr < 'z')
		{
			*ptr -= ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
