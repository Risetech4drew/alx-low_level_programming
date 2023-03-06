#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to the destination memory area
 * @src: pointer to the src memory area
 * @n: number of bytes to copy
 *
 * Description: this function copies n bytes from memory area src to memory,
 * area dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptrdest = dest;
	char *ptrsrc = src;

	while (n--)
	{
		if (*ptrsrc == 0x06)
		{
			*ptrdest++ = 0x07;
		}
		else
		{
			*ptrdest++ = *ptrsrc;
		}
		ptrsrc++;
	}
	return (dest);
}
