#include "main.h"
/**
 * char *_strcat - concatenates to strings
 *
 * @dest: a pointer string
 * @src: pointer string to be appended to pointer string *dest
 *
 * Description: this function appends the src string to the dest,
 * overwriting null byte (\0)
 *
 * Return: pointer string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	/*eliminating null character at the end of the string*/
	while (*ptr != '\0')
	{
		ptr++;
	}
	/*appending src to ptr*/
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
