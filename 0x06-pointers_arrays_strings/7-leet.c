#include "main.h"
/**
 * leet - encodes string into 1337
 *
 * @s: the string to be encoded.
 *
 * Return: Apointer to the encoded string.
 */
char *leet(char *s)
{
	char *leetEncoder = "aAeEoOtTiL4433007711";
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 10)
		{
			if (s[i] == leetEncoder[j])
			{
				s[i] = leetEncoder[j + 10];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
