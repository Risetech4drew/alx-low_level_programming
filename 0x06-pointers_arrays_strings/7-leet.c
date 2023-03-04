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
	char leetChars[] = "aAeEoOtTiL";
	char leetCodes[] = "4433007711";

	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (leetChars[j] != '\0')
		{
			if (s[i] == leetChars[j])
			{
				s[i] = leetCodes[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
