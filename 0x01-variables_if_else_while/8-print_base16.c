#include<stdio.h>
/**
 * main - Entry point
 *
 * this program prints hexadecimal numbers in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = 0;
	int j = 97;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
