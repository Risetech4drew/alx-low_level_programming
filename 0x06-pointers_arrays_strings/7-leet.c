#include "main.h"
#define MAX_LEN 1000
/**
 * leet - encodes string into 1337
 *
 * @s: the string to be encoded.
 *
 * Return: Apointer to the encoded string.
 */
char *leet(char *s)
{
	char *leetChars[] = {"a", "A", "e", "E", "o", "O", "t", "T", "i", "L"};
	char *encoder[] = {"4", "3", "3", "7", "7", "1"};
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 10)
		{
			if (s[i] == *leetChars[j])
			{
				*(s + i) = *(encoder[j]);
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
