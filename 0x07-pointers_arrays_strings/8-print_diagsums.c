#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix,
 * of integers
 *
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	/* iterating over the main diagonal*/
	while (i < size)
	{
		sum1 += *(a + (i * size) + i);
		i++;
	}
	i = 0;
	/*iterating over the secondarydiagonal*/
	while (i < size)
	{
		sum2 += *(a + (i * size) + (size - 1 - i));
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
