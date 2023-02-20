#include<stdio.h>
/**
 * main - Entry
 *
 * This program prints all the possible combination of numbers.
 *
 *Return: Always 0 (Success)
 */
#include <stdio.h>

int main() 
{
    int i = 0, j;
    while (i < 9) 
    	{
	j = i + 1;
        while (j < 10)
	{
            putchar('0' + i);
            putchar('0' + j);
            if (i != 8 || j != 9) 
	    {
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
	}
    	putchar('\n');
    	return 0;
}
