#include "main.h"
/**
 * reverse_array - reverses the contents of array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;

	while (i < n / 2)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = tmp;
		i++;
	}
}
