#include<stdio.h>
/**
 * main - Entry point
 *
 * This prnts all possible two digit combinations seperated by commas
 *
 * Return: Always 0 (successful)
 *
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;

	while (num1 <= 98)
	{
	while (num2 <= 99)
	{
	putchar((num1 / 10) + '0');
	putchar((num1 % 10) + '0');
	putchar(' ');
	putchar((num2 / 10) + '0');
	putchar((num2 % 10) + '0');
	if (num1 != 98 || num2 != 99)
	{
	putchar(',');
	putchar(' ');
	}
	num2++;
	}
	num1++;
	num2 = num1 + 1;
	}
	putchar('\n');
	return (0);
}
