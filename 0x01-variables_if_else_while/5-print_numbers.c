#include<stdio.h>
/**
 * main - Entry point
 *
 * this program prints all single digits of base 10
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = 0;

	do {
		putchar(i + '0');
		i++;
	} while (i <= 9);
	putchar('\n');
	return (0);
}
