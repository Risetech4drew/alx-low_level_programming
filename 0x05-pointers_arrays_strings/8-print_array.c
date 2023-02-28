#include "main.h"
#include<stdio.h>
/**
 * print_array - prints n elements of an array of integers followed by a newline
 *
 * @n: is the number of elements to be printed
 *
 * Description: this functiion prints n elements of an array of integers,
 * followed by a newline.
 * R
 * Return: n number of elements of an array
 */
void print_array(int *a, int n)
{
	int i = 0;
	
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
			
}
