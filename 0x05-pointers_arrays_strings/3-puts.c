#include "main.h"
#include<unistd.h>
/**
 * _puts - prints a string, followed by a newline
 *
 * @str: the string to be printed to the stdout
 *
 * Description: this function prints the string, to stdout follwed by a newline
 *
 * Return: A string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
