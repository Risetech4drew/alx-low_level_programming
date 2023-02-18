#include<stdio.h>
/**
 * main - Entry point
 *
 * this program prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (success) 
 *
 */
int main(void)
{
	int i = 97;
	int j = 65;

	do
	{
		putchar(i);
		i++;
		putchar(j);
		j++;
		putchar('\n');
	}
	while (i <= 122 && j <= 90);
	return (0);
}
