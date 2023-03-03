#include "main.h"
/**
 * cap_string - capitalize words of a string
 *
 * @str: the string containing words to be capitalized
 *
 * Description - this functions capitalizes first character,
 * to uppercase, then loops through the rest of the string and capitalizes,
 * words
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 0;
	int len = 0;

	/*calculating length of the string*/
	while (str[len] != '\0')
	{
		len++;
	}
	/*converting first character to uppercase*/
	if (len >  0 && str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - ('a' - 'A');
	}
	/*looping throgh the rest of the string and capitalize words*/
	while (i < len)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (i + 1 < len && str[i + 1] > 'a' && str[i + 1] < 'z')
			{
				str[i + 1] = str[i + 1] - ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}
