#include "main.h"
/**
 * _strcpy - copy a string to a buffer
 *
 * @dest: pointer to buffer to copy string to
 * @src: pointer to string to be copied
 *
 * Return: pointer value to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
