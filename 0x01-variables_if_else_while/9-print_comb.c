#include<stdio.h>
/**
 * main - Entry point
 *
 * This program prints the possible combinations seperated by comma
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
