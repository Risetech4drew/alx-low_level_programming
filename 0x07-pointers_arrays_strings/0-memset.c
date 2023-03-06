#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to character array s
 * @b: character b
 * @n: integer n
 *
 * Description - this function fills the first n bytes of the memory area,
 * pointed to by s with the constant b.
 *
 * Return: pointer to the memory area "s"
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
