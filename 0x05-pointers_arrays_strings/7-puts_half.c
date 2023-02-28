#include "main.h"
#include<string.h>
/**
 * puts_half - prints halfof te string followed by a newline
 *
 * @str: is the string to be printed in half
 *
 * Description: this function prints second half of the string,
 *if the no. of character is odd n last charcters are printed
 *
 * Return: second half of the string else last n characters
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start = (len + 1) / 2;
	char *p = str + start;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
