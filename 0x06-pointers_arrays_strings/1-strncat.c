#include "main.h"
/**
 * char *_strncat - concatenates two strings
 *
 * @dest: string to have src string appended
 * @src: string intended to be appended to dest string
 * @n: number of bytes from src
 *
 * Description: this function conacatenates dest string and src string,
 * it uses n bytes from src
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
