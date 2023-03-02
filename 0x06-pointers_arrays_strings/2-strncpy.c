#include "main.h"
/**
 * _strncpy - this function copies a string
 *
 * @dest: a pointer pointig to a string
 * @src: the pointer pointing to a string to be copied
 * @n: nuber of bytes of n to be copied
 *
 * Description: this function copies the string pointed by src to dest
 *
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
