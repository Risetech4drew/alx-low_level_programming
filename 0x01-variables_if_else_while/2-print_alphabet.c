#include<stdio.h>
/**
 * main - Entry point
 *
 * this program prints the alphabet in lower_case
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
