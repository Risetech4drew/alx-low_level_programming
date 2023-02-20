#include<stdio.h>
/**
 * main - Entry point
 *
 * this program prints thre possible combinations of digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	while (i < 8)
	{
	while (j < 9)
	{
	while (k < 10)
	{
	if(i != j && j != k && i != k)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(k + '0');
	if (i != 7 || j != 8 || k != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	k++;
	}
	j++;
	k = j + 1;
	}
	i++;
	j = i + 1;
	k = j + 1;
	}
putchar('\n');
return (0);
}
