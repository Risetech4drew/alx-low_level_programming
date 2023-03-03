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
	int i = 0;

	while (s[i] != '\0')
	{

		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		else if (s[i] == 'i' || s[i] == 'L')
		{
			s[i] = 1;
		}
		else
		{
			s[i] = s[i];
		}
		i++;
	}
	return (s);
}
