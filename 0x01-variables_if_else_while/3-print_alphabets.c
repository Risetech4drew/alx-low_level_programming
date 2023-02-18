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

	while (i <= 122 && j <= 90)
	{
		putchar(i);
		i++;
	}
	while ( j <= 90 )
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
